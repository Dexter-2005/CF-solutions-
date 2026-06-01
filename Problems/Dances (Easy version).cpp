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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        fori(i, 0, n - 1) cin >> a[i];
        a[n - 1] = 1;
        sort(all(a));
        vector<ll> b(n);
        fori(i, 0, n) cin >> b[i];
        sort(all(b));
        // fori(i, 0, n) cout << a[i] << " ";
        // cout << endl;   
        // fori(i, 0, n) cout << b[i] << " ";
        // cout << endl;
       
        
        bool flag = false;
        fori(i, 0, n)
        {
            if (a[i] >= b[i])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << 0 << endl;
            continue;
        }
        ll ans = 0;
        ll j = 0;
        ll i = 0;
        while (i < n && j < n)
        {
            if (a[i] < b[j])
            {
                i++;
                j++;
            }
            else
            {
                ans++;
                j++;
            }
        }
        // ans += (n - j);
        cout << ans << endl;
    }

    return 0;
}