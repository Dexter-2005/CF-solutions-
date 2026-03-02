#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n * k);
        for (ll i = 0; i < n * k; i++)
            cin >> v[i];

        ll medpos = (n + 1) / 2;
        ll step = n - medpos + 1;

        ll sum = 0;
        ll temp = n * k - step; 
        for (ll i = 0; i < k; i++) {
            sum =sum+v[temp];
            temp =temp-step;
        }

        cout << sum << "\n";
    }
    return 0;
}
