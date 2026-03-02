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
        ll n, x;
        cin >> x >> n;
        ll ans;

        if (abs(x % 2) == 0)
        {
            if (n % 4 == 0)
                ans = x;
            else if (n % 4 == 1)
                ans = x - n;
            else if (n % 4 == 2)
                ans = x + 1;
            else
                ans = x + n + 1;
        }
        if (abs(x % 2)== 1)
        {
            if (n % 4 == 0)
                ans = x;
            else if (n % 4 == 1)
                ans = x + n;
            else if (n % 4 == 2)
                ans = x - 1;
            else
                ans = x - n - 1;
        }

        cout << ans << "\n";
    }

    return 0;
}
