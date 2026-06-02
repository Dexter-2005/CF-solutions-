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

ll returnzeros(ll num)
{
    ll ct = 0;
    while (num % 10 == 0)
    {
        ct++;
        num /= 10;
    }
    return ct;
}

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

        ll ans = n * m;
        ll zeros = returnzeros(n * m);

        for (ll p2 = 1; p2 <= m; p2 *= 2)
        {
            for (ll p5 = 1; p2 * p5 <= m; p5 *= 5)
            {
                ll need = p2 * p5;
                ll i = (m / need) * need;

                ll z = returnzeros(n * i);
                if (z > zeros || (z == zeros && n * i > ans))
                {
                    zeros = z;
                    ans = n * i;
                }

                if (p5 > m / p2 / 5) break;
            }
            if (p2 > m / 2) break;
        }

        cout << ans << "\n";
    }

    return 0;
}