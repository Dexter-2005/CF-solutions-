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
    //cin >> t;
    while (t--)
    { 
        ll n;
        cin >> n;
        vector<pair<ll,ll>> a(n);
        fori(i,0,n) {
            cin >> a[i].first;
            a[i].second = i + 1;
        }

        sort(all(a));

        if (n == 1) {
            cout << a[0].second << "\n";
            continue;
        }

        vector<ll> pre(n);
        pre[0] = a[0].first;    
        fori(i,1,n) pre[i] = pre[i-1] + a[i].first;
        vector<ll> ans;

        if (n >= 2) {
            for (ll i = n - 2; i >= 0; i--) {
                if (pre[n-2] - a[i].first == a[n-1].first) {
                    ans.pb(a[i].second);
                }
            }
        }

        if (n >= 3 && pre[n-3] == a[n-2].first) {
            ans.pb(a[n-2].second);
        }
        cout << ans.size() << "\n";
        sort(all(ans));
        for (auto x : ans) cout << x << " ";

        
    }
    return 0;
}