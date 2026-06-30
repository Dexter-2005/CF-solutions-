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
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

void dfs(ll node, ll par, vector<vector<ll>> &adj, vector<ll> &ans)
{
    ll i = 1;
    ll parcol = ans[par];  // par ka color
    ll curcol = ans[node]; // current node ka color
    // if (node==1)ans[1]=1;
    for (ll child : adj[node])
    {
        if (child==par)
            continue;
        // if (parcol!=i )
        // {
        //     ans[child]=i;
        //     i++;

        // }
        // else
        // {
        //     i++;
        //     ans[child]=i;
        //     i++;
        // }
        while (i==parcol||i==curcol)i++;
        ans[child]=i;
        i++;
        dfs(child, node, adj, ans);
    }
}

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
        ll edges = n - 1;
        while (edges--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        vector<ll> ans(n+1,0);
        ans[1]=1;
        dfs(1,0,adj,ans);
        ll mx=0;
        for (int i=1;i<=n;i++)mx=max(mx,(ll)adj[i].size());
        cout << mx+1 << "\n";
        fori(i,1,ans.size())
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}