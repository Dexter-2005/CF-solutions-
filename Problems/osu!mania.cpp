#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        for (int i = n - 1; i >= 0; --i) {
            size_t c = v[i].find('#');
            cout << c + 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}