#include <bits/stdc++.h>
using namespace std;
#define ll long long

// tle eliminators solution

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        vector<ll> pre[3];

        for (int i = 0; i < 3; i++)
        {
            ll s = 0;
            pre[i].push_back(s);  

            for (int j = 0; j < n; j++)
            {
                ll a;
                cin >> a;

                if ((s | a) != s)
                {
                    s |= a;
                    pre[i].push_back(s);
                }
            }
        }

        bool ans = false;

        for (int i = 0; i < pre[0].size(); i++)
        {
            for (int j = 0; j < pre[1].size(); j++)
            {
                for (int k = 0; k < pre[2].size(); k++)
                {
                    if ((pre[0][i] | pre[1][j] | pre[2][k]) == x)
                    {
                        ans = true;
                        break;
                    }
                }
                if (ans) break;
            }
            if (ans) break;
        }

        if (ans)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
