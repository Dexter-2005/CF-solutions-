/****************************************************
 ██████╗ ███████╗██╗  ██╗████████╗███████╗██████╗
 ██╔══██╗██╔════╝╚██╗██╔╝╚══██╔══╝██╔════╝██╔══██╗
 ██║  ██║█████╗   ╚███╔╝    ██║   █████╗  ██████╔╝
 ██║  ██║██╔══╝   ██╔██╗    ██║   ██╔══╝  ██╔══██╗
 ██████╔╝███████╗██╔╝ ██╗   ██║   ███████╗██║  ██║
 ╚═════╝ ╚══════╝╚═╝  ╚═╝   ╚══════╝╚═╝  ╚═╝
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
        vector<ll> wt(n + 1);
        vector<ll> h(n + 1);
        vector<vector<ll>> adj(n + 1);
        fori(i, 1, n + 1) cin >> wt[i];
        fori(i, 1, n + 1) cin >> h[i];
        fori(i, 0, n - 1)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        bool flag = true;
        vector<int> sub(n + 1);
        auto dfs = [&](auto &&self, int u, int p) -> void
        {
            sub[u] = wt[u];
            for (int v : adj[u])
            {
                if (v == p)
                    continue;
                self(self, v, u);
                sub[u] += sub[v];
            }
        };
        dfs(dfs, 1, 0);
        fori(i, 1, n + 1)
        {
            ll happy = (h[i] + sub[i]) / 2;
            ll sad = sub[i] - happy;
            if (happy < 0 || sad < 0 || happy - sad != h[i])
            {
                flag = false;
                break;
            }
        }
        vector<pair<ll, ll>> hs(n + 1);
        fori(i, 1, n + 1)
        {
            hs[i].first = (h[i] + sub[i]) / 2;   // happy
            hs[i].second = sub[i] - hs[i].first; // sad
        }

        auto dfs2 = [&](auto &&self, int u, int p) -> void
        {
            for (int v : adj[u])
            {
                if (v == p)
                    continue;
                if (hs[u].first < hs[v].first )
                {
                    flag = false;
                }
                self(self, v, u);
            }
        };

        if (flag)
            dfs2(dfs2, 1, 0);

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}