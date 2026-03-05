/****************************************************
 ██████╗ ███████╗██╗  ██╗████████╗███████╗██████╗
 ██╔══██╗██╔════╝╚██╗██╔╝╚══██╔══╝██╔════╝██╔══██╗
 ██║  ██║█████╗   ╚███╔╝    ██║   █████╗  ██████╔╝
 ██║  ██║██╔══╝   ██╔██╗    ██║   ██╔══╝  ██╔══██╗
 ██████╔╝███████╗██╔╝ ██╗   ██║   ███████╗██║  ██║
 ╚═════╝ ╚══════╝╚═╝  ╚═╝   ╚═╝   ╚══════╝╚═╝  ╚═╝
        CF ID : DeXTer-69
*****************************************************/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fori(i, a, b) for (ll i = a; i < b; i++)
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        // vector<int> freq(26);
        // fori(i,0,n)freq[s[i]]++;
        // if(n==1 || n==2){
        //     cout << "YES\n";
        // }
        // else if(n==3){
        //     if(s[0]!=s[1] && s[1]!=s[2] && s[0]!=s[2])cout << "YES\n";
        //     else if(s[0]==s[1] && s[1]==s[2])cout << "YES\n";
        //     else if(s[0]!=s[1] && s[0]==s[2])cout << "YES\n";
        //     else if(s[0]!=s[1] && s[1]==s[2])cout << "NO\n";
        //     else if(s[0]==s[1] && s[1]!=s[2])cout << "NO\n";
        //     else {
        //         fori
        set<char> c;        
        int k;
        for (k = 0; k < n; k++)
        { 
            if (c.find(s[k]) == c.end())
            {
                c.insert(s[k]);
            }
            else
            {
                break;
            }
        }
     
        for (int i = k; i < n; i++)
        { 
            if (s[i] != s[i - k])
            {
                cout << "NO" << endl; 
               goto next;
            }
        }
        cout << "YES" << endl;
        next:;
    }

}