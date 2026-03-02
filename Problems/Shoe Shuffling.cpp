#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n), ans(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            ans[i] = i + 1;
        }

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1])
                swap(ans[i], ans[i - 1]);
        }

        bool bad = false;
        for (int i = 0; i < n; i++) {
            if (ans[i] == i + 1) {
                bad = true;
                break;
            }
        }

        if (bad) {
            cout << -1 << "\n";
        } else {
            for (int i = 0; i < n; i++) {
                cout << ans[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
