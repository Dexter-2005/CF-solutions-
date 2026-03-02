#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char a[105];
        cin >> a;
        int f = 0;
        for (int i = 0; a[i + 1]; i++) {
            if (a[i] == a[i + 1]) {
                f = 1;
                break;
            }
        }
        if (f) cout << 1 << '\n';
        else {
            int l = 0;
            while (a[l]) l++;
            cout << l << '\n';
        }
    }
    return 0;
}
