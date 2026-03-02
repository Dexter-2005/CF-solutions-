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
        int n, a, b;
        int price;
        cin >> n >> a >> b;
        if (b <= 2 * a)
        {
            price = (n / 2) * b + (n % 2) * a;
        }
        else
            price = n * a;
        cout << price << "\n";
    }

    return 0;
}
