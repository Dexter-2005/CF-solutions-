#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll min = 0;
        ll max = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % k == 0 || a[i] == 0)
            {
                max = max + a[i] / k;
            }
            else
            {
                max = max + (a[i] / k) + 1;
            }
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        min = (sum+k-1)/ k;
        cout << min << " " << max << endl;
    }

    return 0;
}
