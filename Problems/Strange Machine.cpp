#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<ll> que(q);
        for (ll i = 0; i < q; i++) {
            cin >> que[i];
        }

        int alla= 1; 
        for (ll j = 0; j < n; j++) {
            if (s[j] == 'B') {
                alla = 0;
                break;
            }
        }

        for (ll i = 0; i < q; i++) {
            
            if (alla == 1) {
                cout << que[i] << "\n";
            } 
            else {
                ll num;
                num = que[i];
                ll ans = 0;
                ll j = 0;
                while (num != 0) {
                    if (s[j] == 'A') {
                        num = num - 1;
                    } else {
                        num = num / 2;
                    }
                    if (j == n - 1) {
                        j = 0;
                    } else {
                        j++;
                    }
                    ans++;
                }
                cout << ans << "\n";
            } 
        }
    }
    return 0;
}