#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;

        ll total= 0;
        ll extra = -1;

        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;

            ll trans = a / x;
            ll contri= trans * y;
            total += contri;

            ll extra1 = a - contri;
            
            if (extra1 > extra)
            {
                extra = extra1;
            }
        }

        cout << total + extra << "\n";
    }

    return 0;
}