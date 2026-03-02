#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int k = 0; 
        for (char c : s)
        {
            if (c == '1') k++;
        }
        int total_ones = k * (k - 1) + (n - k) * (k + 1);
        cout << total_ones << "\n";
    }

    return 0;
}
