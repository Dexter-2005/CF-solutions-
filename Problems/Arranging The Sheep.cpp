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
        string s;
        cin >> s;
        vector<ll> tuti;
        fori(i, 0, n)
        {
            if (s[i] == '*')
                tuti.pb(i + 1);
        }

        if ((ll)tuti.size() <= 1)
        {
            cout << "0\n";
            continue;
        }

        ll tt = 0;
        if ((ll)tuti.size() % 2 != 0)
        {
            tt = ((ll)tuti.size() + 1) / 2 - 1;
            ll sum1 = tt - 1;
            fori(i, 0, tt)
            {
                sum1 += tuti[i] + i;
            }
            sum1 = tuti[tt] * tt - sum1;
            ll sum2 = 0;
            ll j = 0;
            fori(i, tt + 1, (ll)tuti.size())
            {
                sum2 += tuti[i] - j;
                j++;
            }
            sum2 = sum2 - tuti[tt] * (tt) - tt - 1;
            cout << sum1 + sum2 << "\n";
        }
        else
        {
            ll tt1 = (ll)tuti.size() / 2 - 1;

            ll sum1a = tt1 - 1;
            fori(i, 0, tt1)
            {
                sum1a += tuti[i] + i;
            }
            sum1a = tuti[tt1] * tt1 - sum1a;

            ll sum2a = 0, j = 0;
            fori(i, tt1 + 1, (ll)tuti.size())
            {
                sum2a += tuti[i] - j;
                j++;
            }
            sum2a = sum2a - tuti[tt1] * ((ll)tuti.size() - tt1 - 1) - ((ll)tuti.size() - tt1 - 1) - 1;
            ll ans1 = sum1a + sum2a;

            ll tt2 = (ll)tuti.size() / 2;

            ll sum1b = tt2 - 1;
            fori(i, 0, tt2)
            {
                sum1b += tuti[i] + i;
            }
            sum1b = tuti[tt2] * tt2 - sum1b;

            ll sum2b = 0;
            j = 0;
            fori(i, tt2 + 1, (ll)tuti.size())
            {
                sum2b += tuti[i] - j;
                j++;
            }
            sum2b = sum2b - tuti[tt2] * ((ll)tuti.size() - tt2 - 1) - ((ll)tuti.size() - tt2 - 1) - 1;
            ll ans2 = sum1b + sum2b;

            cout << min(ans1, ans2) << "\n";
        }
    }

    return 0;
}