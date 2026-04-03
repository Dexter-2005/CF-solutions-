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

        vector<ll> adj[n + 1];

        fori(i, 0, n - 1)
        {
            ll u;
            cin >> u;
            adj[u].pb(i + 2);
        }

        string s;
        cin >> s;

         ans = 0;
        dfs(1, adj, s);

        cout << ans << "\n";
    }
}