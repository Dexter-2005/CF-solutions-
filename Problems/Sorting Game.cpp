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
        
        int n;
        cin >> n;

        string s;
        cin >> s;

        string temp = s;
        sort(temp.begin(), temp.end());
        vector<int> idx;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != temp[i])
            {
                idx.push_back(i + 1);
            }
        }

        if (s == temp)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Alice\n";

            
            cout << idx.size() << "\n";
            for (int i = 0; i < idx.size(); i++)
            {
                cout << idx[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}