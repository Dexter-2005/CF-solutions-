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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll p, q;
        cin >> p >> q;

        ll X = 2*(p + 2*q) + 1;

        bool found = false;

        for (ll a = 1; a * a <= X; a++)
        {
            if (X % a == 0)
            {
                ll b = X / a;

                // try (a, b)
                if (a % 2 == 1 && b % 2 == 1)
                {
                    ll n = (a - 1) / 2;
                    ll m = (b - 1) / 2;

                    if (n > 0 && m > 0)
                    {
                        cout << n << " " << m << "\n";
                        found = true;
                        break;
                    }
                }

                // try swapped
                if (a != b && a % 2 == 1 && b % 2 == 1)
                {
                    ll n = (b - 1) / 2;
                    ll m = (a - 1) / 2;

                    if (n > 0 && m > 0)
                    {
                        cout << n << " " << m << "\n";
                        found = true;
                        break;
                    }
                }
            }
        }

        if (!found) cout << -1 << "\n";
    }

    return 0;
}