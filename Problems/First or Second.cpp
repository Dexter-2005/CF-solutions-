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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> p(n, 0);
        vector<ll> s(n, 0);

        if (n > 1) p[1] = a[0];
        for (int i = 2; i < n; i++)
        {
            p[i] = p[i - 1] + abs(a[i - 1]);
        }

        for (int i = n - 2; i >= 0; i--)
        {
            s[i] = s[i + 1] - a[i + 1];
        }

        ll ans = p[0] + s[0];
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, p[i] + s[i]);
        }

        cout << ans << "\n";
    }
    return 0;
}