#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int c = 0, ok = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                c++;
            else
                c = 0;
            if (c >= k)
                ok = 0;
        }

        if (!ok)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<int> a(n);
        int l = 1, r = n;

        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                a[i] = l++;
        for (int i = 0; i < n; i++)
            if (s[i] == '0')
                a[i] = r--;

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << (i + 1 == n ? '\n' : ' ');
        }
    }
}