/****************************************************
 ██████╗ ███████╗██╗  ██╗████████╗███████╗██████╗
 ██╔══██╗██╔════╝╚██╗██╔╝╚══██╔══╝██╔════╝██╔══██╗
 ██║  ██║█████╗   ╚███╔╝    ██║   █████╗  ██████╔╝
 ██║  ██║██╔══╝   ██╔██╗    ██║   ██╔══╝  ██╔══██╗
 ██████╔╝███████╗██╔╝ ██╗   ██║   ███████╗██║  ██║
 ╚═════╝ ╚══════╝╚═╝  ╚═╝   ╚═╝   ╚══════╝╚═╝  ╚═╝
        CF ID : DeXTer-69
*****************************************************/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int a[200000];
int pre[30][200001];

int andans(int l, int r)
{
    int ans = 0;
    for (int i = 0; i < 30; i++)
    {
        if (pre[i][r+1]-pre[i][l]==0)
            ans += (1 << i);
    }
    return ans;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < 30; j++){
            pre[j][0] = 0;
            for (int i = 0; i < n; i++)
                if((1<<j) & a[i])
                    pre[j][i+1] = pre[j][i];
                else
                    pre[j][i+1] = pre[j][i]+1;
        }
        ll q;
        cin >> q;
        while (q--)
        {
            int l, k;
            cin >> l >> k;
            l--;
            if(a[l] < k){
                cout << -1 << ' ';
                continue;
            }
            ll low = l, high = n-1, ans = -1;
            while (low < high){
                ll mid = (low+high+1)/2;
                if(andans(l, mid) >= k){
                    low = mid;
                }
                else
                    high = mid-1;
            }
            cout << low+1 << ' ';
        }
        cout << '\n';
    }   

    return 0;
}