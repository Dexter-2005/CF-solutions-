#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 676767677;

bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

ll pdt(ll d) {
    ll chosen[3];
    int count = 0;
    chosen[count++] = 1;
    ll last = 1;
    ll temp = last + d;
    for (ll x = max(2LL, temp); count < 3; ++x) {
        if (!isPrime(x)) continue;
        if (x - last >= d) {
            chosen[count++] = x;
            last = x;
            temp = last + d;
            if (count < 3 && temp > x + 1) x = temp - 1;
        }
    }
    ll prod = 1;
    for (int i = 0; i < 3; ++i) prod = (prod * chosen[i]) % MOD;
    return prod;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll d;
        cin >> d;
        cout << pdt(d) << "\n";
    }
    return 0;
}
