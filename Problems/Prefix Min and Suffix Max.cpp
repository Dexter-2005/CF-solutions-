#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        string res(n, '0');
        
        int currentMin = a[0];
        for (int i = 0; i < n; ++i) {
            currentMin = min(currentMin, a[i]);
            if (a[i] == currentMin)
                res[i] = '1';
        }
        
        int currentMax = a[n - 1];
        for (int i = n - 1; i >= 0; --i) {
            currentMax = max(currentMax, a[i]);
            if (a[i] == currentMax)
                res[i] = '1';
        }

        cout << res << '\n';
    }

    return 0;
}
