#include <bits/stdc++.h>
using namespace std;

bool valid(int x, int y)
{
    if (x == 0 && y == 0)
        return true;
    return max(x, y) <= 2 * min(x, y) + 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        c = c - a;
        d = d - b;

        if (valid(a, b) && valid(c, d))
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
