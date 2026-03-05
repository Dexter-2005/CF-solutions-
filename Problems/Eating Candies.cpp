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
        ll n;
        cin >> n;
        vector<ll> a(n);
        fori(i, 0, n) cin >> a[i];
        vector<ll> pref(n);
        // pref[0] = a[0];
        // fori(i,1,n) pref[i] = pref[i-1] + a[i];
        // vector<ll> suff(n);
        // suff[n-1] = a[n-1];
        // for(ll i=n-2; i>=0; i--) suff[i] = suff[i+1] + a[i];
        // ll ans = 0;
        // for(ll i=n-1; i>=0; i--) {
        //    for(ll j=0;j<i; j++) {
        //        if(pref[j] == suff[i]) ans = j+1+n-i;
        //    }
        // }
        // if(ans == 0) cout << 0 << "\n";
        // else

        ll i = 0, j = n - 1;
        ll left = 0, right = 0;
        ll ans = 0;
        while (i <= j)
        {
            if (left <= right)
            {
                left += a[i];
                i++;
            }
            else
            {
                right += a[j];
                j--;
            }
            if (left == right)
            {
                ans = i + (n - 1 - j);
            }
        }

        cout << ans << "\n";
    }
}