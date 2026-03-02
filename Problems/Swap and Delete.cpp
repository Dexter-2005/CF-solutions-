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
        int n = s.length();

        int count = 0;
        int max01 = 0, max00 = 0;
        int c1 = 0;
        int c0 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                c0++;
            else
                c1++;
        }
        if (c1 == c0)
        {
            cout << "0\n";
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
            else
            {
                if (count > max01)
                {
                    max00 = max01;
                    max01 = count;
                }
                else if (count > max00)
                {
                    max00 = count;
                }
                count = 0;
            }
        }

        if (count > max01)
        {
            max00 = max01;
            max01 = count;
        }
        else if (count > max00)
        {
            max00 = count;
        }
        int count2 = 0;
        int max11 = 0, max10 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count2++;
            }
            else
            {
                if (count2 > max11)
                {
                    max10 = max11;
                    max11 = count2;
                }
                else if (count2 > max10)
                {
                    max10 = count2;
                }
                count2 = 0;
            }
        }
        if (count2 > max11)
        {
            max10 = max11;
            max11 = count2;
        }
        else if (count2 > max10)
        {
            max10 = count2;
        }

        if (max01 == max11)
        {
            cout << max(max00, max10) << endl;
        }
        else if (abs(max01 - max11) == 1)
        {
            cout << "1"<< endl;
        }
        else
        {
            cout << max(max01, max11) << endl;
        }
    }

    return 0;
}
