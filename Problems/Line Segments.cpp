#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool f(double d, double s) {
    return fabs(d - s) <= 1e-9;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        double x, y, p, q;
        cin >> n >> x >> y >> p >> q;

        double a[1005], m = 0, s = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            m = max(m, a[i]);
            s += a[i];
        }

        double dx = x - p, dy = y - q, d = sqrt(dx * dx + dy * dy);
        m = max(m, d);
        s += d;

        if (m > s - m) cout << "No\n";
        else if (n == 1 && !f(d, a[0])) cout << "No\n";
        else cout << "Yes\n";
    }
}
