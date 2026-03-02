#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

//combinatorial approach

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];

        vector<ll> merged1(2 * n + 5, 0), merged2(2 * n + 5, 0);

        ll count = 1;
        for (ll i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                count++;
            else
            {
                merged1[a[i - 1]] = max(merged1[a[i - 1]], count);
                count = 1;
            }
        }
        merged1[a[n - 1]] = max(merged1[a[n - 1]], count);

        count = 1;
        for (ll i = 1; i < n; i++)
        {
            if (b[i] == b[i - 1])
                count++;
            else
            {
                merged2[b[i - 1]] = max(merged2[b[i - 1]], count);
                count = 1;
            }
        }
        merged2[b[n - 1]] = max(merged2[b[n - 1]], count);

        ll tmax = 1;
        for (ll i = 0; i <= 2 * n; i++)
            tmax = max(tmax, merged1[i] + merged2[i]);

        cout << tmax << "\n";
    }
    return 0;
}
