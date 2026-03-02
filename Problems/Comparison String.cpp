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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxlen = 1, curlen = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                curlen++;
            }
            else
            {
                curlen = 1;
            }
            maxlen = max(maxlen, curlen);
        }
        cout << maxlen + 1 << "\n";
    }
    return 0;
}