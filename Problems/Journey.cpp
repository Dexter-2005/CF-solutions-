#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int sum = a + b + c;
        int x1 = 3 * (n / sum);
        int x2 = n % sum;

        if (x2 == 0)
            cout << x1 << "\n";
        else if (x2 <= a)
            cout << x1 + 1 << "\n";
        else if (x2 <= a + b)
            cout << x1 + 2 << "\n";
        else
            cout << x1 + 3 << "\n";
    }

    return 0;
}
