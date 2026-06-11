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
        ll n,k;
        cin >> n >>k;
        vector<ll> a(n);
        fori(i, 0, n)
        {
            cin >> a[i];
        }
        vector<ll> rem(n,0);
        fori(i, 0, n)
        {
            rem[i] = (k - a[i] % k) % k;
        }
        // fori(i,0,n) cout << rem[i] << " ";
        sort(all(rem));
        ll ans = 0;
        ll ct=0;
        fori(i, 0, n){
            if(rem[i] == 0) continue;
            if(i>0 && rem[i] == rem[i-1]) ct++;
            else ct=0;
            ans = max(ans, rem[i]+ct*k);
        }
        if(ans) ans++;
        cout << ans << "\n";

    }

        return 0;
    }