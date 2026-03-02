#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // frequency array bana liya
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
            
        }

        // non block elements ko -1 kar diya
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != 1)
            {
                if (freq[a[i]] != a[i])
                {
                    a[i] = -1;
                    freq[a[i]] = 0;
                }
            }
        }
        int maxfreq = max_element(freq.begin(), freq.end()) - freq.begin();
        


    }
    return 0;
}
