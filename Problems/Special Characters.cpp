#include <iostream>
#include <string>
using namespace std;

int countSpecial(const string &s)
{
    int count = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if ((i > 0 && s[i] == s[i - 1]) || (i + 1 < s.size() && s[i] == s[i + 1]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        bool found = false;

        string base = "";
        string pattern = "AABBCCDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVVWWXXYYZZ";
        for (int len = 2; len <= 200; ++len)
        {
            string candidate = pattern.substr(0, len);
            if (countSpecial(candidate) == n)
            {
                cout << "YES\n"
                     << candidate << "\n";
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "NO\n";
        }
    }

    return 0;
}
