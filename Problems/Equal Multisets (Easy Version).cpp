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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        fori(i, 0, n) cin >> a[i];
        fori(i, 0, n) cin >> b[i];
         
   
        
        unordered_map<ll, ll> posa, posb;

        fori(i, 0, n) posa[a[i]] = i;

        bool ok = true;
        bool hasneg = false;

        fori(i, 0, n)
        {
            if (b[i] == -1)
            {
                hasneg = true;
                continue;
            }

            if (posb.count(b[i]))
            {
                ok = false;
                break;
            }
            posb[b[i]] = i;
        }

        if (!ok)
        {
            cout << "NO\n";
            continue;
        }

        if (!hasneg)
        {
            cout << "YES\n";
            continue;
        }
       
        
        vector<ll> keys;
        for (auto it : posb) keys.pb(it.first);

        fori(i, 0, keys.size())
        {
            ll val = keys[i];
            ll dev = abs(posb[val] - posa[val]);

            if (dev > k)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}