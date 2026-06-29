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

void dfs(ll node, ll parent, vector<vector<ll>> &adj, vector<ll> &visited)
{
    visited[node] = 1;

    for (ll child : adj[node])
    {
        if (child != parent && !visited[child])
        {
            dfs(child, node, adj, visited);
        }
    }
}

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
        vector<vector<ll>> adj(n + 1);
        vector<ll> deg(n + 1, 0);
        for (ll i = 0; i < n - 1; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }
        if (n == 1)
        {
            cout << 0 << "\n";
            continue;
        }
        queue<ll> q;
        for (ll i = 1; i <= n; i++)
        {
            if (deg[i] == 1)
                q.push(i);
        }
        ll cnt = 0;
        for (ll step = 0; step < k; step++)
        {
            ll sz = q.size();
            if (sz == 0)
                break;
            while (sz--)
            {
                ll node = q.front();
                q.pop();
                deg[node] = 0; 
                cnt++;
                for (auto child : adj[node])
                {
                    if (deg[child] == 0)
                        continue; 
                    deg[child]--;
                    if (deg[child] == 1)
                        q.push(child);
                }
            }
        }
        cout << n - cnt << "\n";
    }

    return 0;
}