#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isprime(long long n)
{
    if (n <= 1)
        return false;

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        vector<ll> pre(n + 1);

        pre[0] = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            pre[i + 1] = pre[i] + a[i];
        }

        ll sum = pre[n];

        if (isprime(sum))
        {
            cout << "1\n";
        }
        else
        {
            ll ans = 0;

            for (ll i = 1; i < n; i++)
            {
                ans = max(ans, __gcd(pre[i], sum - pre[i]));
            }

            cout << ans << "\n";
        }
    }

    return 0;
}