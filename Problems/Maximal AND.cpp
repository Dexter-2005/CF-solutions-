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
        // getting started with core bitmasking
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        fori(i, 0, n) cin >> a[i];

        vector<ll> bit(31, 0);

        fori(i, 0, n)
        {
            fori(j, 0, 31)
            {
                if (!(a[i] & (1LL << j)))
                {
                    bit[j]++;
                }
            }
        }
        for (ll i = 30; i >= 0; i--)
        {
            if (bit[i] <= k)
            {
                k -= bit[i];
                bit[i] = 0;
            }
        }

        ll ans = 0;
        fori(i, 0, 31)
        {
            if (bit[i] == 0)
            {
                ans += (1LL << i);
            }
        }

        cout << ans << "\n";
    }
}