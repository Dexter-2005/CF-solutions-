#include <bits/stdc++.h>
using namespace std;
#define ll long long
 // got tle removed by gpt (precomputed)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<ll> pmina(n), pmaxa(n);
        pmina[0] = a[0];
        pmaxa[0] = a[0];
        for (int i = 1; i < n; i++) {
            pmina[i] = min(pmina[i - 1], a[i]);
            pmaxa[i] = max(pmaxa[i - 1], a[i]);
        }

        vector<ll> sminb(n), smaxb(n);
        sminb[n - 1] = b[n - 1];
        smaxb[n - 1] = b[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            sminb[i] = min(sminb[i + 1], b[i]);
            smaxb[i] = max(smaxb[i + 1], b[i]);
        }

        vector<pair<ll, ll>> v(n);
        for (int k = 0; k < n; k++) {
            ll l = min(pmina[k], sminb[k]);
            ll r = max(pmaxa[k], smaxb[k]);
            v[k] = {r, l};
        }

        sort(v.begin(), v.end());

        ll ans = 0;
        ll maxl = 0;
        ll lastr = 0;
        int idx = 0;

        while (idx < n) {
            ll curr = v[idx].first;

            if (curr > lastr + 1) {
                ans += maxl * (curr - 1 - lastr);
            }

            ll newl = maxl;
            while (idx < n && v[idx].first == curr) {
                newl = max(newl, v[idx].second);
                idx++;
            }

            ans += newl;

            maxl = newl;
            lastr = curr;
        }

        if (2 * n > lastr) {
            ans += maxl * (2 * n - lastr);
        }

        cout << ans << "\n";
    }
    return 0;
}