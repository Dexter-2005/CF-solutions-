#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        ll sum = 0;
        int distinct = 0;

        for (int i = 0; i < n; i++) {
            if (freq[s[i] - 'a'] == 0)
                distinct++;
            freq[s[i] - 'a']++;
            sum += distinct;
        }

        cout << sum << "\n";
    }

    return 0;
}
