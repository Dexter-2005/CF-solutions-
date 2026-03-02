#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> p(n);
        set<char> c;
        for (int i = 0; i < n; ++i) {
            c.insert(s[i]);
            p[i] = c.size();
        }
        vector<int> q(n);
        c.clear();
        for (int i = n - 1; i >= 0; --i) {
            c.insert(s[i]);
            q[i] = c.size();
        }
        int m = 0;
        for (int i = 0; i < n - 1; ++i) {
            m = max(m, p[i] + q[i + 1]);
        }
        cout << m << "\n";
    }
    return 0;
}