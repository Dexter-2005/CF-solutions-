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
        vector<ll> v(n);
        int temp = 0;
        int index = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1] && v[i] > v[i - 1])
            {
                temp = 1;
                index = i;

                break;
            }
        }
        if (temp == 1)
        {
            cout << "YES\n";
            cout << index  << " " << index + 1 << " " << index + 2 << "\n";
        }
        else

            cout << "NO\n";
    }

    return 0;
}
