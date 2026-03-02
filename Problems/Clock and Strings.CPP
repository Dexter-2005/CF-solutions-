#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((c > a || c < b) && (d > a || d < b))
        {
            cout << "NO\n";
        }
        else if ((c < a || c > b) && (d < a || d > b))
        {
            cout << "NO\n";
        }
        else cout <<"YES\n";
    }

    return 0;
}
