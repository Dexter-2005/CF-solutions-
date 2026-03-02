#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 676767677;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll w, h;
        cin >> w >> h;
        ll ans = 0;
        for (ll i = 0; i < 4; i++)
        {
            ll n;
            cin >> n;
            if (i < 2)
            {
                ll mn, mx;
                mn = 1e9;
                mx = 0;
                for (ll j = 0; j < n; j++)
                {
                    ll x;
                    cin >> x;
                    mn = min(mn, x);
                    mx = max(mx, x);
                }
                ans = max(ans, (mx - mn) * h);
            }
            else
            {
                ll mn, mx;
                mn = 1e9;
                mx = 0;
                for (ll j = 0; j < n; j++)
                {
                    ll x;
                    cin >> x;
                    mn = min(mn, x);
                    mx = max(mx, x);
                }
                ans = max(ans, (mx - mn) * w);
            }
        }
        cout << ans << endl;
    }
    return 0;
}