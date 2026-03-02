#include <iostream>
#include <string>
using namespace std;

void findMinMax(int arr[], int n, int &minVal, int &maxVal)
{
    minVal = arr[0];
    maxVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
}

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int n, t;
        int who = 0;
        cin >> n >> t;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int minVal, maxVal;
         findMinMax(arr, n, minVal, maxVal);
        while (maxVal - minVal > t)
        {
             bool changed = false;
            for (int i = 0; i < n; i++)
            {

                if (arr[i] > 0 && arr[i] == minVal && maxVal - minVal > t)
                {
                    arr[i] = arr[i] - 1;
                    who++;
                    changed = true;
                }
                  findMinMax(arr, n, minVal, maxVal);
            }
            if (!changed) break;
        }

        if (who % 2 == 0)
            printf("Tom \n");
        else
            printf("Jerry \n");
    }

    return 0;
}
