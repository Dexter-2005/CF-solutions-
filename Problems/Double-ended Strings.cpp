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

        // tle eliminators solution
        
        string A, B;
        cin >> A >> B;
        

        ll n = A.size(), m = B.size();
        ll lcs = 0;

        for (ll len = 1; len <= min(n, m); len++)
        {
            for (ll i = 0; i + len <= n; i++)
            {
                for (ll j = 0; j + len <= m; j++)
                {
                    string extract_A = A.substr(i, len);
                    string extract_B = B.substr(j, len);

                    if (extract_A == extract_B)
                        lcs = max(lcs, len);
                }
            }
        }

        ll operations = n + m - 2 * lcs;
        cout << operations << endl;
    }
}