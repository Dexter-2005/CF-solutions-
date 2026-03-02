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
        ll x, y;
        cin >> x >> y;

        if (x == y) {
            cout << 0 << "\n";
            continue;
        }

        ll n1 = max(x, y);
        ll n2 = min(x, y);

        if (n1 % n2 != 0) {
            cout << -1 << "\n";
            continue;
        }

        ll res = n1 / n2;

        if ((res & (res - 1)) != 0) {
            cout << -1 << "\n";
            continue;
        }

        int ans = log2(res);

        int minm = -1;
        for (int i = 0; i < 30; i++) {
            for (int j = 0; j < 30; j++) {
                for (int k = 0; k < 30; k++) {
                    if (3 * i + 2 * j + k == ans) {
                        int cnt = i + j + k;
                        if (minm == -1 || cnt < minm)
                            minm = cnt;
                    }
                }
            }
        }

        cout << minm << "\n";
    }

    return 0;
}
