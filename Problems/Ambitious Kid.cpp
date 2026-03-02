#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

  
        int n;
        cin >> n;
        int a[n];
        int min;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 0)
            {
                a[i] = a[i];
            }
            else
            {
                a[i] = -a[i];
            }
        }
        min = a[0];

        for (int i = 1; i < n; i++)
        {
            if (min > a[i])
            {
                min = a[i];
            }
        }

        cout << min << " ";
    

    return 0;
}