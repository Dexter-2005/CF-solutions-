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
        ll n, m;
        cin >> n >> m;

        vector<pair<ll,ll>> a;
        fori(i, 0, m) {
            ll u, v;
            cin >> u >> v;
            if (u > v) swap(u, v);
            a.pb({u, v});
        }
        sort(all(a));
        a.erase(unique(all(a)), a.end());
        ll sz = a.size();

        if (sz == 0) {
            cout << (n * (n + 1)) / 2 << "\n";
            continue;
        }

        vector<ll> pre(sz);
        pre[sz - 1] = a[sz - 1].second;
        for (ll i = sz - 2; i >= 0; i--) {
            pre[i] = min(a[i].second, pre[i + 1]);
        }

        ll ans = 0;
        fori(i, 0, n) {
            ll start = i + 1;
            ll idx = lower_bound(all(a), make_pair(start, 0LL)) - a.begin();

            if (idx == sz) {
                ans += (n - start + 1);
            } else {
                ll cutoff = pre[idx];
                ans += (cutoff - start);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}