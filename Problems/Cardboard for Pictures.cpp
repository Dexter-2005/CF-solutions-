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
        ll n, width;
        cin >> n >> width;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll sum = 0, sqsum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            sqsum += arr[i] * arr[i];
        }

        long double A = n;
        long double B = sum;
        long double C = (sqsum - width) / 4.0L;

        long double D = B * B - 4 * A * C;
        long long x = (-B + sqrt(D)) / (2 * A);

        cout << x << "\n";
    }

    return 0;
}
