#include <iostream>
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
        long long s[20];
        int c = 0;
        long long p = 10;
        for (int k = 1; k <= 18; ++k) {
            long long d = p + 1;
            if (d > n) {
                break;
            }
            if (n % d == 0) {
                s[c++] = n / d;
            }
            p *= 10;
        }
        if (c == 0) {
            cout << 0 << endl;
        } else {
            sort(s, s + c);
            cout << c<<"\n";
            for (int i = 0; i < c; i++) {
                cout << " " << s[i];
            }
            cout << endl;
        }
    }
    return 0;
}