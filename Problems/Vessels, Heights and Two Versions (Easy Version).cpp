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
        fori(i, 0, n)
            cin >> a[i];
        fori(i, 0, n)
        {
            ll ans = 0;
            vector<ll> premax(n, 0), sufmax(n, 0);
            ll maxi = 0;
            fori(st, 1, n)
            {
                ll curr = (i + st) % n;
                maxi = max(maxi, a[(i + st - 1) % n]);
                premax[curr] = maxi;
            }
            maxi = 0;
            fori(st, 1, n)
            {
                ll curr = (i - st + n) % n;
                maxi = max(maxi, a[(i - st + n) % n]);
                sufmax[curr] = maxi;
            }
            fori(j, 0, n)
            {
                if(j == i) continue;
                ans += min(premax[j], sufmax[j]);
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}