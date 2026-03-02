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
        if (n == 1)
        {
            cout << "0\n";
            continue;
        }
        if (n % 2 == 0 || n % 3 == 0)
        {
            ll count2 = 0, count3 = 0;
            while (n % 2 == 0)
            {
                n /= 2;
                count2++;
            }
            while (n % 3 == 0)
            {
                n /= 3;
                count3++;
            }
            if (n != 1 || count2 > count3)
            {
                cout << "-1\n";
                continue;
            }
            cout << 2 * count3 - count2 << "\n";
        }
        else
        {
            cout << "-1\n";
            continue;
        }
    }

    return 0;
}
