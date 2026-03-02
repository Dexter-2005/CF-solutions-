#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s = 0;
        cin >> n;
        while (n--) {
            int x;
            cin >> x;
            if (x != 0) s = s + x;
            else s = s + 1;
        }
        cout << s << "\n";
    }
    return 0;
}
