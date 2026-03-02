#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 676767677;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {

        int t;
        cin >> t;

        vector<ll> v;
        ll m1 = LLONG_MAX;
        ll ans = 0;

        while (t--)
        {
            ll n;
            cin >> n;
            vector<ll> a(n);
            for (ll i = 0; i < n; i++)
                cin >> a[i];

            sort(a.begin(), a.end());
            if (!a.empty())
            {
                m1 = min(m1, a[0]);
                if (a.size() >= 2)
                {
                    v.push_back(a[1]);
                }
            }
        }

        sort(v.begin(), v.end());

        for (ll i = 1; i < (ll)v.size(); i++)
        {
            ans += v[i];
        }

        cout << ans + m1 << "\n";
    }
    return 0;
}
