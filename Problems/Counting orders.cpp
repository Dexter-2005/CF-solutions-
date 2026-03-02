#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long ans = 1;
        int used = 0;

        for (int i = n - 1; i >= 0; i--)
        {

            int pos = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            long long cnt = n - pos;

            long long available = cnt - used;

            if (available <= 0)
            {
                ans = 0;
                break;
            }

            ans = (ans * available) % MOD;
            used++;
        }

        cout << ans << "\n";
    }

    return 0;
}
