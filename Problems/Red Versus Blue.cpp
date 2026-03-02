#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, r, b;
        cin >> n >> r >> b;
        string ans = "";

        while (r > 0 || b > 0)
        {
            ll x = (r + b) / (b + 1);
            while (x > 0 && r > 0)
            {
                ans += 'R';
                r--;
                x--;
            }

            if (b > 0)
            {
                ans += 'B';
                b--;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
