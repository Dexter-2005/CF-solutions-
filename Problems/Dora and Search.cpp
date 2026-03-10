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
        fori(i, 0, n) cin >> a[i];
        ll mini = 1;
        ll maxi = n;
        ll l = 0, r = n - 1;
        while (l < r)
        {
            bool changed = false;

            if (a[l] == mini)
            {
                l++;
                mini++;
                changed = true;
            }
            else if (a[r] == maxi)
            {
                r--;
                maxi--;
                changed = true;
            }
            else if (a[l] == maxi)
            {
                l++;
                maxi--;
                changed = true;
            }
            else if (a[r] == mini)
            {
                r--;
                mini++;
                changed = true;
            }

            if (!changed)
                break;
        }
        if(l==r) cout << -1 << endl;
        else cout << l + 1 << " " << r + 1 << endl;
       
    }
}