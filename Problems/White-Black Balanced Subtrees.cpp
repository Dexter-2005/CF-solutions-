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

// map<int, pair<int, int>> tme;
// int t = 0;
// // tme.clear();
// //  label-> {in time , out time}
ll ans = 0;

ll dfs(ll node, vector<ll> adj[], string &s)
{
    if (adj[node].size() == 0)
    {
        return (s[node - 1] == 'W') ? 0 : 1;
    }

    ll count = 0;

    for (auto child : adj[node])
    {
        count += dfs(child, adj, s);
    }

    count += (s[node - 1] == 'W') ? 0 : 1;

    if (count == 0)
    {
        ans++;
    }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> edges(m);
    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++) {
        cin >> edges[i].first >> edges[i].second;
        edges[i].first--, edges[i].second--;
        adj[edges[i].first].push_back(i);
        adj[edges[i].second].push_back(i);
    }

    // Max degree ≤ 5
    vector<pair<int,int>> dirs = {
        {1,0}, {0,1}, {-1,0}, {0,-1}, {1,1}
    };

    // Direction index per edge (u side, v side)
    vector<pair<int,int>> edgeDir(m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (int)adj[i].size(); j++) {
            int e = adj[i][j];
            if (edges[e].first == i)
                edgeDir[e].first = j;
            else
                edgeDir[e].second = j;
        }
    }

    // Place vertices on grid
    vector<pair<int,int>> pos(n);
    for (int i = 0; i < n; i++) {
        int x = (i % 40) * 10;
        int y = (i / 40) * 10;
        pos[i] = {x, y};
        cout << x << " " << y << "\n";
    }

    // Output edges
    for (int i = 0; i < m; i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        int xu = pos[u].first, yu = pos[u].second;
        int xv = pos[v].first, yv = pos[v].second;

        auto [dxu, dyu] = dirs[edgeDir[i].first];
        auto [dxv, dyv] = dirs[edgeDir[i].second];

        int z = i + 1; // unique height

        vector<vector<int>> path;

        path.push_back({xu, yu, 0});
        path.push_back({xu + dxu, yu + dyu, 0});
        path.push_back({xu + dxu, yu + dyu, z});
        path.push_back({xv + dxv, yv + dyv, z});
        path.push_back({xv + dxv, yv + dyv, 0});
        path.push_back({xv, yv, 0});

        cout << path.size();
        for (auto &p : path) {
            cout << " " << p[0] << " " << p[1] << " " << p[2];
        }
        cout << "\n";
    }

    return 0;
}
    return count;
}


// void bfs(ll root, vector<ll> adj[])
// {
//     queue<pair<int, int>> q;
//     //       node,parent

//     q.push({1, 0});
//     while (q.empty() == false)
//     {
//         ll node = q.front().first;
//         cout << node << " ";
//         ll parent = q.front().second;
//         q.pop();
//         for (auto child : adj[node])
//         {
//             if (child == parent)
//                 continue;
//             q.push({child, node});
//         }
//     }
// }

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
        vector<vector<ll>>adj(n+1);
        for(int i = 2 ; i <= n ; i++) {
            ll u;
            cin >> u;
            adj[u].push_back(i);
        }
        string s;
        cin >> s;
        ll ans = 0;
        vector<ll>count(n+1 , 0);
 
        function<void(int, int)> dfs = [&](int u, int parent){
            for (int v : adj[u]){
                if (v == parent) continue;
                if(s[v-1] == 'B') count[v]++;
                else count[v]--;
                dfs(v, u);
            }
            for(int v : adj[u]) {
                if(v == parent) continue;
                count[u] += count[v];
            }
        };
        count[1] = (s[0] == 'B' ? 1 : -1);
        dfs(1,0);
        for(int i = 1 ; i <= n ; i++) {
            if(count[i] == 0) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
    
}