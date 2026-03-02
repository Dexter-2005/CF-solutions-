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
        int n;
        cin >> n;

        string arr;
        cin >> arr;

        int count1 = 0;

        int i = 0;
        int j = 0;

        while (i < n)
        {
            if (arr[i] != '(')
            {
                i++;
            }
            else
            {
                j = i + 1;
                while (j < n && arr[j] != ')')
                {
                    j++;
                }

                if (j < n)
                {
                    arr[i] = '*';
                    arr[j] = '*';
                }
                i++;
            }
        }

        for (int k = 0; k < n; k++)
        {
            if (arr[k] == '*')
            {
                count1++;
            }
        }

        cout << (n - count1) / 2 << '\n';
    }

    return 0;
}
