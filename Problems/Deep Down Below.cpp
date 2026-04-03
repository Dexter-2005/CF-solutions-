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
        ll n;
        cin >> n;

        vector<pair<ll, ll>> a;

        for (ll i = 0; i < n; i++)
        {
            ll k;
            cin >> k;

            ll maxi = 0;

            for (ll j = 0; j < k; j++)
            {
                ll x;
                cin >> x;

                if (x - j + 1 > maxi)
                {
                    maxi = x - j + 1;
                }
            }

            a.push_back({maxi, k});
        }

        sort(a.begin(), a.end());

        ll ans = 0;
        ll current = 0;

        for (int i = 0; i < n; i++)
        {
            if (current < a[i].first)
            {
                ans += (a[i].first - current);
                current = a[i].first;
            }
            current += a[i].second;
        }

        cout << ans << "\n";
    }
}