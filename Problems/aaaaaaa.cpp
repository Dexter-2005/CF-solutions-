#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        map<int, int> f;
        vector<bool> p(n + 1, false);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            f[a[i]]++;
            if (a[i] >= 1 && a[i] <= n) {
                p[a[i]] = true;
            }
        }

        vector<int> d;

        for (int i = 1; i <= n; ++i) {
            if (!p[i]) {
                d.push_back(i);
            }
        }

        vector<pair<int, int>> ps;
        for (const auto& pair : f) {
            ps.push_back({pair.second, pair.first});
        }

        sort(ps.begin(), ps.end());

        for (const auto& pair : ps) {
            d.push_back(pair.second);
        }

        for (int i = 0; i < k; ++i) {
            cout << d[i];
            if (i < k - 1) {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}