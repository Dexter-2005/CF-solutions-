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
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string copy = s;
        ll i=1;
        while (i <= n-2)
        {
         
            if (copy[i - 1] == '1' && copy[i + 1] == '1')
            {
                copy[i] = '1';
                i+=2;
            }
            else i++;
        }
            
        
        ll maxi = 0;
        for (ll i = 0; i < n; i++)
        {
            if (copy[i] == '1')  maxi++;

        }
        ll zero = 0;
        i = 1;
        while (i <= n-2)
        {
            if (copy[i - 1] == '1' && copy[i] == '1' && copy[i + 1] == '1')
            {
                zero++;
                i+=2;
            }
            else i++;
        }
        ll mini=maxi-zero;
        cout<<mini<<" "<<maxi<<"\n";
    }
}