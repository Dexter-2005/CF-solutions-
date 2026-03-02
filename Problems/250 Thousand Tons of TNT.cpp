#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        vector<ll> pre(n);
        pre[0] = a[0];
        for (ll i = 1; i < n; i++)
            pre[i] = pre[i - 1] + a[i];

              // vector<ll> factors;
        // for (ll i = 1; i * i <= n; i++) {
        //     if (n % i == 0) {
        //         factors.push_back(i);
        //         if (i != n / i) {
        //             factors.push_back(n / i);
        //         }
        //     }
        // }

        ll ans = 0;

        for (ll len = 1; len <= n; len++)
        {
            if (n % len != 0)
                continue;

            ll maxi = pre[len - 1];
            ll mini = pre[len - 1];

            for (ll j = len; j < n; j += len)
            {
                ll curr = pre[j + len - 1] - pre[j - 1];
                maxi = max(maxi, curr);
                mini = min(mini, curr);
            }

            ans = max(ans, maxi - mini);
        }

        cout << ans << "\n";
    }
    return 0;
}
