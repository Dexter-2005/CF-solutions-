#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        if (n < x)
        {
            int j = n - 1;
            for (int i = 0; i < n; i++)
            {
                arr[i] = j--;
            }
        }
        else
        {
            arr[n] = x;
            int k = 0;
            for (int i = n - 1; i > 0; i--)
            {
                arr[i] = k++;
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}
