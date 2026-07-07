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
const ll inf = 1e18;
const ll mod = 1e9 + 7;

void debug(vector<ll> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;

    while (t--)
    {
       ll n;
        cin >> n;
        vector<vector<ll>> adj(n + 1);
        fori(i, 1, n)
        {
            ll x, y;
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        vector<ll> bfs(n + 1, 0);
        fori(i, 1, n + 1) cin >> bfs[i];
        vector<ll> level(n + 1, -1);
        vector<ll> par(n + 1, 0);
        queue<ll> q;
        q.push(1);
        level[1] = 0;
        while (!q.empty())
        {
            ll v = q.front();
            q.pop();
            for (auto u : adj[v]) if (level[u] == -1)
            {
                level[u] = level[v] + 1;
                par[u] = v;
                q.push(u);
            }
        }
        bool valid = true;
        fori(i, 1, n + 1)
        {
            if (level[bfs[i]] < level[bfs[i - 1]])
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            vector<char> vis(n + 1, 0);
            vis[bfs[1]] = 1;
            ll i = 1, j = 2;
            while (j <= n)
            {
                ll u = bfs[i], v = bfs[j];
                bool isPar = par[v] == u;
                if (isPar)
                {
                    vis[v] = 1;
                    j++;
                }
                else
                {
                    i++;
                    if (i >= j)
                    {
                        valid = false;
                        break;
                    }
                }
            }
            if (valid) fori(k, 1, n + 1) if (!vis[bfs[k]])
            {
                valid = false;
                break;
            }
        }
        if(valid) cout << "Yes\n";
        else cout << "No\n";
      
    }
    return 0;
}