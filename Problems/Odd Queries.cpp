#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        ll n, q, l, r, k;
        cin >> n >> q;
        vector<ll> a(n);
        vector<ll> b(n);
        ll total = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }
        b[0] = a[0];
        for (ll i = 0; i < n ; i++)
        {
            b[i] = b[i - 1] + a[i];
        }

        while (q--)
        {
            cin >> l >> r >> k;
            ll sum2 = b[r - 1] - b[l - 1]+a[l-1];
            ll newsum = total - sum2 + (r - l + 1) * k;

            if (newsum % 2 == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
    return 0;
}