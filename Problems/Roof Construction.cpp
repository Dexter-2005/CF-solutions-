#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 676767677;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = log2(n - 1);
        int m = pow(2, i);

        for (int j = m - 1; j >= 0; j--)
        {
            cout << j << " ";
        }

        for (int j = m; j < n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}