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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i].first;
            if (a[i].first % 2 == 0)
            {
                a[i].second = 0;
            }
            else
            {
                a[i].second = 1;
            }
        }
        vector<ll> b(n);
        b[0] = a[0].first;

        for (ll i = 1; i < n; i++)
        {
            if (a[i].second != a[i - 1].second && b[i - 1] > 0)
            {
                b[i] = b[i - 1] + a[i].first;
            }
            else
            {
                b[i] = a[i].first;
            }
        }
        ll ans = int64_t(-1e18);
        for (ll i = 0; i < n; i++)
        {
            ans = max(ans, b[i]);
        }
        cout << ans << endl;
    }
    return 0;
}