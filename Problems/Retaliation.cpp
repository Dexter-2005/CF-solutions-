#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcases;
    cin >> testcases;

    while (testcases--) {
        int len;
        cin >> len;
        vector<int> z(len);
        for (int i = 0; i < len; ++i) cin >> z[i];

        bool ok = false;

        if (len == 1) {
            ok = (z[0] == 0);
        } else {
            int a = z[0], b = z[1];
            int i1 = 1, j1 = len;
            int i2 = 2, j2 = len - 1;

            int delta = i1 * j2 - i2 * j1;
            if (delta != 0) {
                int x1 = a * j2 - b * j1;
                int x2 = i1 * b - i2 * a;

                if (x1 % delta == 0 && x2 % delta == 0) {
                    int A = x1 / delta;
                    int B = x2 / delta;

                    if (A >= 0 && B >= 0) {
                        bool match = true;
                        for (int pos = 0; pos < len; ++pos) {
                            int sum = A * (pos + 1) + B * (len - pos);
                            if (sum != z[pos]) {
                                match = false;
                                break;
                            }
                        }
                        if (match) ok = true;
                    }
                }
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
