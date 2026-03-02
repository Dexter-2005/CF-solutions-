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
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];

        ll j = n - 1;
        ll count = 0;
        ll idx1 = 0, idx2 = 0;
        ll maxi = -1;

        while (j >= 0)
        {
            ll start = j;
            bool alreadysorted = true; 

            while (j > 0 && b[j] >= b[j - 1])
            {
                count++;
                j--;
            }

            ll end = j;

            for (ll i = end; i <= start; i++)
            {
                if (a[i] != b[i])
                {
                    alreadysorted = false;
                    break;
                }
            }

            if (!alreadysorted && count >= maxi)
            {
                maxi = count;
                idx1 = end;
                idx2 = start;
            }

            j--; 
        }

        cout << idx1 + 1 << " " << idx2 + 1 << endl;
    }

    return 0;
}
