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

map<int, pair<int, int>> tme;
int t = 0;
    // label-> {in time , out time}


void dfs(ll node, ll parent, vector<ll> adj[])
{
    // entering the node
    tme[node].first = t;
    t++;

    cout << node << " ";
    for (auto child : adj[node])
    {
        if (child == parent)
            continue;
        dfs(child, node, adj);
    }
    tme[node].second = t;
    t++;
    // leaving the node
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

        // taking input of tree
        vector<ll> adj[n + 1];
        fori(i, 0, n - 1)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        // DFS to find the depth of each node
        dfs(1, 0, adj);
        
       
    }
}