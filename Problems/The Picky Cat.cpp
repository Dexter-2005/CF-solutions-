#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[100005];
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool ok = false;

        for (int sign = 0; sign < 2; ++sign) {
            int val = (sign == 0 ? a[0] : -a[0]);
            int b[100005];
            b[0] = val;
            for (int i = 1; i < n; ++i) {
                // Choose the sign that brings a[i] closer to val
                if (abs(a[i] - val) < abs(-a[i] - val)) {
                    b[i] = a[i];
                } else {
                    b[i] = -a[i];
                }
            }

            sort(b, b + n);
            int median = b[(n - 1) / 2];
            if (median == val) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
