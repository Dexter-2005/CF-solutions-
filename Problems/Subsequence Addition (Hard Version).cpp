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
        ll n;
        cin >> n;

        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        if (a[0] != 1)
        {
            cout << "NO\n";
            continue;
        }

        if (n == 1 && a[0] == 1)
        {
            cout << "YES\n";
            continue;
        }

        vector<ll> prefix(n);

        prefix[0] = a[0];

        for (ll i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + a[i];

        bool check = false;

        for (ll i = n - 1; i >= 1; i--)
        {
            if (a[i] > prefix[i - 1])
            {
                cout << "NO\n";
                check = true;
                break;
            }
        }

        if (!check)
            cout << "YES\n";
    }

    return 0;
}