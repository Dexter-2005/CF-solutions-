#include <iostream>
using namespace std;

bool check(int e, int o, int n)
{
    for (int k = 1; k <= n; k += 2)
    {
        int evenneeded = n - k;
        if (k <= o && evenneeded <= e)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        int odd = 0, even = 0;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (check(even, odd, x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
