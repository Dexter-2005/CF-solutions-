#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    using namespace std;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n);
        vector<int> d(n, 0);

        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            --u; --v;
            a[u].push_back(v);
            a[v].push_back(u);
            d[u]++;
            d[v]++;
        }

        bool s = false;
        for (int i = 0; i < n; ++i) {
            if (d[i] == n - 1) {
                s = true;
                break;
            }
        }

        if (n <= 2 || s) {
            cout << 0 << endl;
            continue;
        }

        vector<bool> l(n, false);
        int c = 0;
        for (int i = 0; i < n; ++i) {
            if (d[i] == 1) {
                l[i] = true;
                c++;
            }
        }

        int m = 0;
        for (int i = 0; i < n; ++i) {
            int p = 0;
            if (l[i]) {
                p++;
            }
            for (int j : a[i]) {
                if (l[j]) {
                    p++;
                }
            }
            m = max(m, p);
        }
        
        cout << c - m << endl;
    }

    return 0;
}