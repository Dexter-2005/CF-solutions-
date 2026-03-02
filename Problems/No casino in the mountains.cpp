#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
           n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int h = 0;
        int i = 0;
        while (i < n)
        {
            if (a[i] == 1)
            {
                i++;
                continue;
            }

            int j = i;
            while (j < n && a[j] == 0)
            {
                j++;
            }

            int l = j - i;

            if (l >= k)
            {
                h += 1 + (l - k) / (k + 1);
            }int

            i = j;
        }

        cout << h << "\n";


        
    }

    return 0;
}









