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
const ll inf = 1e18;
const ll mod = 1e9 + 7;

void debug(vector<ll> &v)
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        fori(i, 0, n) cin >> a[i];   

        unordered_map<ll, ll> dpe, dpo;  // dp[i] number of ways to get sum i -> using take not take dp 
        dpe[0] = 1;
        fori(i, 0, n)
        {
            ll val = a[i];
            vector<pair<ll, ll>> evens(dpe.begin(), dpe.end());
            vector<pair<ll, ll>> odds(dpo.begin(), dpo.end());
            fori(j, 0, evens.size())
            {
                ll sum = evens[j].first;
                ll ct = evens[j].second;
                ll nsum = sum + val;      
                dpo[nsum] = (dpo[nsum] + ct) % mod;  
            }

            fori(j, 0, odds.size())
            {
                ll sum = odds[j].first;
                ll ct = odds[j].second;
                ll nsum = sum - val;
                dpe[nsum] = (dpe[nsum] + ct) % mod;
            }
        }

        ll ans = 0;
        if (dpe.count(0))
        {
            ans = (ans + dpe[0]) % mod;
        }
        if (dpo.count(0))
        {
            ans = (ans + dpo[0]) % mod;
        }
        cout << ans << "\n";
    }

    return 0;
}