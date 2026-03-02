#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {   ll n,k;
        cin >> k;
        n = k;
      ll l = 0;
        while (n > 0)
        {
            l = n % 10;
            n = n / 10;
            if (l > 0 && k % l != 0)
            {
                k++;
                n = k;
            }
        }
        cout << k << endl;
    }

    return 0;
}
