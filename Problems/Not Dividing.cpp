#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {

            if (a[i] != 1)
            {
                if (a[i + 1] % a[i] == 0)
                {

                    a[i + 1]++;
                }
            }
            else
            {
                a[i]++;
                if (a[i + 1] % a[i] == 0)
                {

                    a[i + 1]++;
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {

            if (a[i] != 1)
            {
                if (a[i + 1] % a[i] == 0)
                {

                    a[i + 1]++;
                }
            }
            else
            {
                a[i]++;
                if (a[i + 1] % a[i] == 0)
                {

                    a[i + 1]++;
                }
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}