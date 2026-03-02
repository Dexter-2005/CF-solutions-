#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        if (n > 0 && (n & (n - 1)) == 0)  
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
