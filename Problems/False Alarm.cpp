#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int flag = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                for(int j = i; j < min(i + x, n); j++) {
                    arr[j] = 0;
                }
                break;
            }
        }

        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                flag = 1;
                break;
            }
        }

        if(flag == 1) 
            printf("NO\n");
        else 
            printf("YES\n");
    }

    return 0;
}
