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
        int n, k, x;
        cin >> n >> k >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int nb = n * k;
        int b[n];
        for (int i = 0; i < nb; ++i)
        {
            b[i] = a[i % n];
        }
        long long count = 0;
        long long sum = 0;
        int r = 0;
        for (int l = 0; l < nb; ++l)
        {

            while (r < nb && sum < x)
            {
                sum += b[r];
                r++;
            }

            if (sum >= x)
            {
                count += (nb - r + 1);
            }

            sum -= b[l];
        }
        cout << count <<"\n";
    }

    return 0;
}
