#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long cost = 0;
        long long p3 = 1;
        for (int x = 0; n > 0; x++) {
            int digit = n % 3;
            if (digit > 0) {
                long long dealcost;
                if (x == 0) {
                    dealcost = 3;
                } else {
                    dealcost = p3 * 3 + (long long)x * (p3 / 3);
                }
                cost = cost +(long long)digit * dealcost;
            }
            n = n/ 3;
            p3 = p3*3;
        }
        cout << cost << endl;
    }
    return 0;
}