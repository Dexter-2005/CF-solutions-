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
    // cin >> t;
    while (t--)
    {
        ll n, k, answer = 0;
        cin >> n >> k;

        vector<ll> adj[n + 1], subtree(n + 1), depth(n + 1, -1), arr(n);

        iota(arr.begin(), arr.end(), 1);

        fori(i, 1, n)
        {
            ll x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        function<void(ll, ll)> dfs = [&](ll node, ll parent)
        {
            depth[node] = depth[parent] + 1;
            for (auto &i : adj[node])
            {
                if (i != parent)
                {
                    dfs(i, node);
                    subtree[node] += subtree[i] + 1;
                }
            }
        };

        dfs(1, 1);

        sort(arr.begin(), arr.end(), [&](ll a, ll b)
             { return depth[a] - subtree[a] > depth[b] - subtree[b]; });

        fori(i, 0, k)
        {
            answer += depth[arr[i]] - subtree[arr[i]];
        }

        cout << answer << "\n";
    }
    return 0;
}