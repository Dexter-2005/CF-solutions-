#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<int> a(n, 0);

        a[0] = k * b;
        s =s- k * b;


        if (s < 0) {         
            cout << "-1\n";
            continue;
        }

        for (int i = 0; i < n; ++i) {
            int temp = min(k - 1, s);
            a[i] =a[i]+ temp;
            s =s- temp;
            
        }

        if (s > 0) {
            cout << "-1\n";
            continue;
        }   
        for (int i = 0; i < n; ++i)
            cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}
