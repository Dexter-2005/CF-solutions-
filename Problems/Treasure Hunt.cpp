#include <iostream>
using namespace std;

typedef long long ll;

ll total_dug(ll day, ll x, ll y) {
    ll b_count = (day + 1) / 2;
    ll k_count = day / 2;
    return 2 * (b_count * x + k_count * y);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll x, y, a;
        cin >> x >> y >> a;

        ll target = 2 * a + 1;

        ll low = 1, high = 2e9, answer = 0;

        while (low <= high) {
            ll mid = (low + high) / 2;
            if (total_dug(mid, x, y) > target) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        if (answer % 2 == 1)
            cout << "NO\n"; 
        else
            cout << "YES\n"; 
    }

    return 0;
}
