#include <iostream>
#include <cmath>
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
        int arr[n];
        bool flag = true;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n - 1; i++)
        {
            int diff = abs(arr[i + 1] - arr[i]);
            if (diff == 5 || diff == 7)
                continue;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }

    return 0;
}
