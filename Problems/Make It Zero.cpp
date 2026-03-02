#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        if (n == 1) {
            cout << 0 << "\n";               
            continue;
        }

        if (n % 2 == 0) {
            cout << 2 << "\n";
            cout << 1 << " " << n << "\n";  
            cout << 1 << " " << n << "\n";
        } else {
            cout << 4 << "\n";
            cout << 1 << " " << n-1 << "\n";
            cout << 1 << " " << n-1 << "\n";
            cout << n-1 << " " << n << "\n";
            cout << n-1 << " " << n << "\n";
        }
    }
    return 0;
}
