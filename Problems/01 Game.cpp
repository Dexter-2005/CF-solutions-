#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                count0++;
            else
                count1++;
        }
        int temp = min(count0, count1);
        if (temp % 2 == 0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }

    return 0;
}
