#include <iostream>
#include <unordered_set>
using namespace std;

int countDistinctElements(int arr[], int n)
{
    unordered_set<int> unique;
    for (int i = 0; i < n; ++i)
    {
        unique.insert(arr[i]);
    }
    return unique.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int count1;
        int count2;
        cin >> n;
        int arr[n];
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        count1 = countDistinctElements(arr, n);
        count2 = countDistinctElements(arr1, n);

        if (count1 + count2 >= 4)
        {
            cout << "YES \n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}