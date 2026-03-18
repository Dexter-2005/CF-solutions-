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
        ll n, k, x;
        cin >> n >> k >> x;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        sort(all(a));

        vector<ll> gaps;

        for (ll i = 1; i < n; i++)
        {
            ll d = a[i] - a[i - 1];
            if (d > x)
            {
                ll need = (d - 1) / x;
                gaps.push_back(need);
            }
        }

        sort(all(gaps));

        ll groups = gaps.size() + 1;

        for (ll i = 0; i < (ll)gaps.size(); i++)
        {
            if (k >= gaps[i])
            {
                k -= gaps[i];
                groups--;
            }
            else
                break;
        }

        cout << groups << '\n';
    }
}