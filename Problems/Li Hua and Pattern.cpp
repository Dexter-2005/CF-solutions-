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
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n][n];
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (arr[n - i - 1][n - j - 1] != arr[i][j])
                {
                    cnt++;
                }
            }
        }
        if (cnt / 2 <= m &&( (m - cnt / 2) % 2 == 0 || (n %2 ==1)))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
