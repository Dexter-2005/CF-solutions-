#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;
        ll common = n / lcm(x, y);
        ll count1 = n / x - common; 
        ll count2 = n / y - common; 
        ll sum1 = count1 * n - (count1 * (count1 - 1)) / 2;
        ll sum2 = (count2 * (count2 + 1)) / 2;
        cout << sum1 - sum2<< '\n';
    }
    return 0;
}
