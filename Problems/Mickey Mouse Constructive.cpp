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
const ll MOD = 676767677;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << 1 << "\n";
            fori(i, 0, x) cout << "1 ";
            fori(i, 0, y) cout << "-1 ";
            cout << "\n";
        }
        else if (x > y)
        {
            
            ll diff = x - y;
            ll ans = 0;
            for (ll i = 1; i * i <= diff; i++) {
                if (diff % i == 0) {
                    ans++;
                    if (i * i != diff) ans++;
                }
            }
            cout << ans % MOD << "\n";
            fori(i, 0, x) cout << "1 ";
            fori(i, 0, y) cout << "-1 ";
            cout << "\n";
        }
        else
        {
            ll diff = y - x;
            ll ans = 0;
            for (ll i = 1; i * i <= diff; i++) {
                if (diff % i == 0) {
                    ans++;
                    if (i * i != diff) ans++;
                }
            }
            cout << ans % MOD << "\n";
            fori(i, 0, x) cout << "1 ";
            fori(i, 0, y) cout << "-1 ";
            cout << "\n";
        }
    }
    return 0;
}