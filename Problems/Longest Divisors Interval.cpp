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
        long long int n;
        cin >> n;
 
        int flag = 0;
    
        for (long long int i = 1; i < n; i++) {
            if (n % i != 0) {
                cout << i - 1<< endl;
                flag = 1;
                break;
            }
        }
 
        if(flag == 0)
        cout << n << endl;
    }

        return 0;
    }
