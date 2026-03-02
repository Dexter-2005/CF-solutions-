#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, count = 0;
        cin >> n >> k;

        if (n % 2 == 0)
        {
            
            count = (n + (k - 2)) / (k - 1);
        }
        else
        {
            
            n -= k;
            count++;

            if (n > 0)
                count += (n + (k - 2)) / (k - 1); 
        }

        cout << count << "\n";
    }
    return 0;
}

