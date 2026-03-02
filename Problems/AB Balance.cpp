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
        ll n;
        string s;
        cin >> s;
        n=s.length();
        if(s[0]==s[n-1])
        {
           cout << s << endl;
        }
        else
        {
            s[n-1]=s[0];
            cout << s << endl;
        }
        
        
    
    }

    return 0;
}
