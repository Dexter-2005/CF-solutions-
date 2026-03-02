#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int v = -1;
        bool p = true;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int x : a)
        {
            if (x != -1)
            {
                if (x == 0)
                {
                    p = false;
                    break;
                }
                if (v == -1)
                {
                    v = x;
                }
                else if (v != x)
                {
                    p = false;
                    break;
                }
            }
        }

        if (p)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}