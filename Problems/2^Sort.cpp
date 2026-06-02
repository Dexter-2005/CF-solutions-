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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        k++;
        vector<ll> a(n);
        fori(i, 0, n) cin >> a[i];
        vector<ll> len;
        ll ct = 1;
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i + 1] > a[i] / 2)
            {
                ct++;
            }
            else
            {
                if (ct > 1)
                    len.push_back(ct);
                ct = 1;
            }
        }
        if (ct > 1)
        len.push_back(ct); 
        // fori(i, 0, len.size()) cout << len[i] << " ";
        // cout << "\n";
        ll ans=0;
        fori(i,0,len.size()){
            if(len[i]>=k){
                ans+=len[i]-k+1;
            }
        }
        cout << ans <<"\n";
    }

    return 0;
}