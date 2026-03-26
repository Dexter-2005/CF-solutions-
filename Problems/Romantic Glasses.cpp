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

        vector<ll> a(n), b(n), pre(n);

        fori(i, 0, n) cin >> a[i];

        fori(i, 0, n)
        {
            if (i % 2)
                b[i] = -a[i];
            else
                b[i] = a[i];
        }

        pre[0] = b[0];
        fori(i, 1, n)
        {
            pre[i] = pre[i - 1] + b[i];
        }

        set<ll> s;
        bool ok = false;

        fori(i, 0, n)
        {
            if (pre[i] == 0 || s.count(pre[i]))
            {
                ok = true;
                break;
            }
            s.insert(pre[i]);
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}