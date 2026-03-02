#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<ll> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > a)
            {
                v[i] = a;
            }
            sum = sum + v[i];
        }
        cout << a + sum << endl;
    }

    return 0;
}
