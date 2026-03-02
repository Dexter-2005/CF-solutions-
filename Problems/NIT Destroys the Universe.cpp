
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0, c = 0;
        int i = 0, j = 0;
        while (j < n)
        {
            i = j;
            while (j < n && v[j] != 0)
            {
                j++;
            }
            if (j != i)
            {
                ans++;
            }
            else
                j++;
        }
        if (ans > 2)
            ans = 2;
        cout << ans << endl;
    }

    return 0;
}
