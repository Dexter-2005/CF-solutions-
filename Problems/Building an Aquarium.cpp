#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int low = 1;
        int high = *max_element(a.begin(), a.end()) + x;
        int ans = 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            int water_needed = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] < mid)
                    water_needed += (mid - a[i]);
                if (water_needed > x) break; 
            }

            if (water_needed <= x) {
                ans = mid;        
                low = mid + 1;
            } else {
                high = mid - 1;    
            }
        }

        cout << ans << endl;
    }

    return 0;
}
