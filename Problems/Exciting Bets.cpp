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
        ll a, b;
        cin >> a >> b;
        ll ans1 = abs(a - b);
        if (a == b)
            cout << "0" << " " << "0" << endl;
        else
        {
            cout << ans1 << " " << min(a % ans1, ans1 - (a % ans1)) << endl;
        }
    }

    return 0;
}
