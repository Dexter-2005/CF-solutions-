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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        fori(i, 0, n) cin >> a[i];
        if (k >= 3)
        {
            cout << "0\n";
            continue;
        }
        else
        {
            if (k == 1)
            {
                sort(all(a));
                ll ans = INF;
                fori(i, 0, n - 1)
                {
                    ans = min(ans, abs(a[i + 1] - a[i]));
                }
                fori(i, 0, n)
                {
                    ans = min(ans, abs(a[i]));
                }
                cout << ans << "\n";
            }
            else
            {

                sort(all(a));
                ll ans = INF;
                fori(i, 0, n - 1)
                {
                    ans = min(ans, a[i + 1] - a[i]);
                }
                ans = min(ans, a[0]);

                fori(i, 0, n)
                {
                    fori(j, i + 1, n)
                    {
                        ll x = abs(a[i] - a[j]);
                        ll idx=lower_bound(all(a), x) - a.begin();
                        if(idx<n)
                            ans=min(ans, abs(a[idx]-x));
                        if(idx-1>=0)
                            ans=min(ans, abs(a[idx-1]-x));
                    
                    }
                }
                cout << ans << "\n";
            }
        }
    }
    return 0;
}