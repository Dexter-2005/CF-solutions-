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

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> a(m);
        for (ll i = 0; i < m; i++) cin >> a[i];

        sort(a.begin(), a.end());

        vector<ll> seg;
        for (ll i = 0; i < m - 1; i++) seg.pb(a[i + 1] - a[i] - 1);
        seg.pb(a[0] + n - a[m - 1] - 1);

        sort(seg.rbegin(), seg.rend());

        ll s = 0, d = 0;

        for (ll i = 0; i < seg.size(); i++)
        {
            ll x = seg[i] - d * 2;
            if (x > 0)
            {
                s++;
                x -= 2;
                if (x > 0) s += x;
                d += 2;
            }
        }

        cout << n - s << "\n";
    }
}