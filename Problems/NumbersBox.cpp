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
        int n, m;
        cin >> n >> m;
        int sum = 0;
        int h = INT_MAX;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int temp;
                cin >> temp;
                h = min(h, abs(temp));
                if (temp < 0)
                {
                    count++;
                }
                sum += abs(temp);
            }
        }
        if (count % 2 == 0)
        {
            cout << sum << "\n";
        }
        else
        {
            cout << sum - 2 * h << "\n";
        }
    }
    return 0;
}