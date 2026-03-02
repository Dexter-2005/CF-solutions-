#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;
 
        vector<long long> s(n + 1, 0);
        for (int i = n - 1; i >= 0; --i)
            s[i] = s[i + 1] + a[i];
 
        vector<long long> pmax(n + 1, LLONG_MIN);
        for (int i = 0; i < n; ++i)
            pmax[i + 1] = max(pmax[i], a[i]);
 
        vector<long long> smax(n + 1, LLONG_MIN);
        smax[n] = LLONG_MIN;
        for (int i = n - 1; i >= 0; --i)
            smax[i] = max(smax[i + 1], a[i]);
 
        vector<long long> ans(n);
 
        for (int k = 1; k <= n; ++k) {
            long long base = s[n - k];
            long long best = base;
 
            int pos = n - (k - 1);
            if (pos < 0) pos = 0;
 
            long long outside = pmax[pos];
            if (outside != LLONG_MIN) {
                long long cand = s[n - (k - 1)] + outside;
                if (cand > best) best = cand;
            }
 
            ans[k - 1] = best;
        }
 
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
 
    return 0;
}
