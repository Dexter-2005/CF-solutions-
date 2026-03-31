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
ll f(ll x){ return x*(x+1)/2; }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {

        ll k, x;
        cin >> k >> x;

        // ll sum = k * (k + 1) / 2;

        // if (x <= sum)
        // {
        //     ll ans = ceil((sqrt(1 + 8.0 * x) - 1) / 2);
        //     cout << ans << "\n";
        // }
        // else
        // {
        //     ll rem = x - sum;

        //     ll ans = k + ceil((sqrt(1 + 8.0 * rem) - 1) / 2);

        //     if (ans > 2 * k - 1)
        //         ans = 2 * k - 1;

        //     cout << ans << "\n";
        // }

        ll l = 1, r = 2 * k - 1, a = 2 * k - 1;
        while (l <= r)
        {
            ll m = (l + r) / 2, c;
            if (m >= k)
                c = f(k) + f(k - 1) - f(2 * k - 1 - m);
            else
                c = f(m);
            if (c >= x)
                a = m, r = m - 1;
            else
                l = m + 1;
        }
        cout << a << "\n";
    }
}