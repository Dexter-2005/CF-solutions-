#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        long long count = 0;

        
        if (x > y) {
            swap(a, b);
            swap(x, y);
        }

        
        if (k >= a) {
            long long portions1 = (k - a) / x + 1;
            count += portions1;
            k -= portions1 * x;
        }

        
        if (k >= b) {
            long long portions2 = (k - b) / y + 1;
            count += portions2;
            k -= portions2 * y;
        }

        cout << count << "\n";
    }

    return 0;
}
