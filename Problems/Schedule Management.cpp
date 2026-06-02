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

bool check(ll mid, vector<ll>& cnt, ll n){
    ll fr = 0, need = 0;
    fori(i, 0, n){
        if(mid >= cnt[i])
            fr += (mid - cnt[i]) / 2;
        else
            need += cnt[i] - mid;
    }
    return need <= fr;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> a(m);
        fori(i, 0, m){
            cin >> a[i];
            a[i]--;
        }

        vector<ll> cnt(n, 0);
        fori(i, 0, m) cnt[a[i]]++;

        ll l = 0, r = 2 * m;
        ll res = -1;
        while(l <= r){
            ll mid = (l + r) / 2;
            if(check(mid, cnt, n)){
                res = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        cout << res << "\n";
    }

    return 0;
}