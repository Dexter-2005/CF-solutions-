#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        bool ans = 0;
        if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0)
        {
            ans = 1;
        }
        if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
        {
            ans = 1;
        }
        if ((c + a) % (2 * b) == 0 && (c + a) / (2 * b) > 0)
        {
            ans = 1;
        }
        if (ans == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }

    return 0;
}
