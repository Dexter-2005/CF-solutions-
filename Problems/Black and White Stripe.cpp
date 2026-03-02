#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        ll count = 0;

        for (ll i = 0; i < k; i++) {
            if (s[i] == 'W') count++;
        }

        ll mini = count;

        for (ll i = k; i < n; i++) {
            if (s[i - k] == 'W') count--;
            if (s[i] == 'W') count++;
            mini = min(mini, count);
        }

        cout << mini << "\n";
    }
    return 0;
}
