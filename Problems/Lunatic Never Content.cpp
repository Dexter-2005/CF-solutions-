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
        ll n,ans=0;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n / 2; i++)
        {
            ans = __gcd(ans, abs(a[i] - a[n - i - 1]));
        }
        cout << ans << endl;
    }

    return 0;
}
