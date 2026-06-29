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
const ll mod = 998244353;

void debug(vector<ll> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }


// gfg for modular exponentiation
ll power(ll b, ll e, ll md) {
    ll res = 1;
    b %= md;
    while (e > 0) {
        if (e & 1) res = res * b % md;
        b = b * b % md;
        e >>= 1;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m, r, c;
        cin >> n >> m >> r >> c;
        ll f = n*(c-1) + m*(r-1) - (r-1)*(c-1);
        cout << power(2, f, mod) << "\n";
    }

    return 0;
}