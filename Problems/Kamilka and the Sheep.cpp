#include <iostream>
#include <string>
using namespace std;

void findminmax(int arr[], int n, int &min, int &max)
{
    min = arr[0];
    max = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int min, max;

        findminmax(arr, n, min, max);
        cout << max-min <<"\n";
    }

    return 0;
}

