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

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];

        vector<ll> colours[k + 1];

        for (ll i = 1; i <= k; i++)
            colours[i].push_back(0);

        for (ll i = 0; i < n; i++)
            colours[v[i]].push_back(i + 1);

        for (ll i = 1; i <= k; i++)
            colours[i].push_back(n + 1);

        priority_queue<ll> jumps[k + 1];

        ll ans = INF;

        for (ll i = 1; i <= k; i++)
        {
            for (ll j = 0; j < colours[i].size() - 1; j++)
                jumps[i].push(colours[i][j + 1] - colours[i][j] - 1);

            ll max_val = jumps[i].top();
            jumps[i].pop();

            if (max_val % 2 == 0)
            {
                jumps[i].push(max_val / 2);
                jumps[i].push((max_val / 2) - 1);
            }
            else
            {
                jumps[i].push(max_val / 2);
                jumps[i].push(max_val / 2);
            }

            ans = min(ans, jumps[i].top());
        }

        cout << ans << "\n";
    }
}