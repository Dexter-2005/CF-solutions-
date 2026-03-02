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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll g = 0;
        for (ll i = 0; i < n; i++)
        {
            ll diff = abs(a[i] - (i + 1));
            g = __gcd(g, diff); 
        }

        cout << g << "\n";
    }

    return 0;
}
