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
        vector<ll> a(n);
        fori(i, 0, n) cin >> a[i];
        vector<bool> b(n, false);
        fori(i, 0, n)
        {
            if (a[i] < i + 1)
            {
                b[i] = true;
            }
        }
        // condn->   //  ai < i < aj < j
        // a[i]->    //  0 2 1 6 3 4 1 2 8 3
        // i ->      //  1 2 3 4 5 6 7 8 9 10
        // bool->    //  T F T F T T T T T T
        // ct->      //  0 0 1 1 2 3 4 5 6 7
        // ans->     //  0 0 0 0 1 1 0 0 5 1
        vector<ll> ct(n + 1, 0);
        fori(i, 0, n)
        {
            ct[i + 1] = ct[i];
            if (b[i])
                ct[i + 1]++;
        }

        ll ans = 0;

        fori(j, 0, n)
        {
            if (b[j])
            {
                ll x = a[j];
                if (x > 0)
                {
                    ans += ct[x - 1];
                }
            }
        }

        cout << ans << "\n";
    }
}
