#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<long long > arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll count0 = 0;
        ll count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                count0++;
            else if (arr[i] == 1)
                count1++;
        }
        ll answer=pow(2,count0)*count1;
        cout << answer  << endl;
    }

    return 0;
}
