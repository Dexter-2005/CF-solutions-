#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int ans = 2;
        int low, high;
        if (n == 1 || n == 2)
        {
            cout << "1\n";
        }
        else
        {
            int i = 1;
            low = (i - 1) * x + 3;
                high = i * x + 2;
            while (!(n >= low && n <= high))
            {
                i++;
                low = (i - 1) * x + 3;
                high = i * x + 2;
                ans++;
            }
            cout << ans << "\n";
        }
    }

    return 0;
}