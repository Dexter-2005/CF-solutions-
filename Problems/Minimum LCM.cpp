#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int ans = 1;
        for (int i = 2; i * i <= n; ++i)
        {
            if (n % i == 0)
            {
                ans = n / i;
                break;
            }
        }
        cout << ans << ' ' << n - ans << '\n';
    }

    return 0;
}
