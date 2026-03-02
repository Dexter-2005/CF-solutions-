#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int i = 0;
        int j = n - 1;
        int check = 0;
        if (n % 2 == 0)
        {
            while (k--)
            {
                if ((arr[i] + arr[i + 1]) < arr[j])
                {
                    if (arr[j] - (arr[i] + arr[i + 1]) > arr[j - 1] - (arr[i + 2] + arr[i + 3]))
                    {
                        j--;
                    }
                    else
                    {
                        i = i + 2;
                    }
                }
                else
                {
                    if ((arr[i] + arr[i + 1]) - arr[j] > (arr[i + 2] + arr[i + 3]) - arr[j - 1])
                    {
                        i = i + 2;
                    }
                    else
                    {
                        j--;
                    }
                }
            }
        }
        else{
            while (k--)
            {
                if ((arr[i] + arr[i + 1]) < arr[j])
                {
                    j--;
                    
                }
                else
                {
                    i = i + 2;
                  
                }
            }
    }
    ll sum = 0;
    for (int p = i; p <= j; p++)
    {
        sum += arr[p];
    }
    cout << sum << endl;
    }
    return 0;
}


