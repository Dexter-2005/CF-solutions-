#include <bits/stdc++.h>
using namespace std;

bool isPossible(const string& s) {
    int n = s.size();
    
    
    for (int len = 1; len <= n - 2; ++len) {
        for (int i = 1; i + len < n; ++i) {
            string b = s.substr(i, len);
            string ac = s.substr(0, i) + s.substr(i + len);
            if (ac.find(b) != string::npos) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        cout << (isPossible(s) ? "Yes" : "No") << '\n';
    }

    return 0;
}
