#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void sortArray(int arr[], int size)
{
    std::sort(arr, arr + size);
}

int removeNegOnes(int arr[], int size)
{
    int j = 0; 
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != -1)
        {
            arr[j++] = arr[i];
        }
    }
    return j; 
}
bool isAllMinusOne(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != -1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int testCount;
    cin >> testCount;

    while (testCount--)
    {
        int n;
        cin >> n;
        int arr[n];
        int flag = 0;
        int newsize;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int sorted[n];
        for(int i=0;i<n;i++) sorted[i]=arr[i];
        sortArray(sorted, n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == sorted[i])
            {
                arr[i] = -1;
                sorted[i] = -1;
            }
        }
        if (isAllMinusOne(sorted, n))
        {
            cout << "NO \n";
        }
        else
        { cout <<"YES \n";
            newsize = removeNegOnes(arr, n);
            cout << newsize << "\n";
            for (int i = 0; i <newsize; i++)
            {
                cout << arr[i] << " ";
            }
            cout <<"\n";
        }
    }

        return 0;
    }