#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 676767677;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n,x;
        cin >> n >>x;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll mini=a[0];
        ll maxi=a[0];
        ll ans = 0;
		for (ll i = 1; i < n; i++) {
			if (a[i] > maxi) {
				maxi = a[i];
			}
			if (a[i] < mini) {
				mini = a[i];
			}
			if (maxi- mini > 2 * x) {
				ans++;
				mini = maxi = a[i];
			}
		}
         cout << ans<< endl;


    }
    return 0;

}
