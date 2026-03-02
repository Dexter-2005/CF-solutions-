#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<int, int> Freq;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            Freq[a[i]]++;
            mx = max(Freq[a[i]], mx);
        }
        int c = 0;
        int t = mx;
        while (mx < n)
        {
            c++;
            mx = mx * 2;
        }
        cout << c + n - t << endl;
    }

    return 0;
}