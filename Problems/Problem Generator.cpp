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
        int n, m;
        cin >> n >> m;
        cin.ignore(); 
 
        string str;
        getline(cin, str);
 
        int ca = 0, cb = 0, cc = 0, cd = 0, ce = 0, cf = 0, cg = 0;
 
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'A')
            {
                if (ca < m) ca++;
            }
            else if (str[i] == 'B')
            {
                if (cb < m) cb++;
            }
            else if (str[i] == 'C')
            {
                if (cc < m) cc++;
            }
            else if (str[i] == 'D')
            {
                if (cd < m) cd++;
            }
            else if (str[i] == 'E')
            {
                if (ce < m) ce++;
            }
            else if (str[i] == 'F')
            {
                if (cf < m) cf++;
            }
            else if (str[i] == 'G')
            {
                if (cg < m) cg++;
            }
        }
 
        int answer = (m - ca) + (m - cb) + (m - cc) + (m - cd) + (m - ce) + (m - cf) + (m - cg);
        cout << answer << "\n";
    }
 
    return 0;
}