#include <iostream>
#include <algorithm>
using namespace std;

int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        int n, j, k;
        int max;
        cin >> n >> j >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        if (k == 1)
        {
            if (arr[j-1] == findMax(arr,n))
            {
                cout << "YES \n";
            }
            else
            {
                cout << "NO \n";
            }
        }
        else{
            cout << "YES \n";
        }
    }
            return 0;
    }