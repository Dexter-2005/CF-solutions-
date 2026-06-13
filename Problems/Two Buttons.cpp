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
    // cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ans = 0;
        // ll ct = 0;
        // bool flag = false;
        // if (m <= n)
        // {
        //     ans = abs(m - n);
        // }
        // else
        // {
        //     while (n < m)
        //     {
        //         n = n * 2;
        //         ct++;
        //         if (n == m)
        //         {
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if (flag)
        //     {
        //         ans = ct;
        //     }
        //     else
        //     {
        //         ll diff = abs(m - n);
        //         if(diff==1)
        //         {
        //             ans = ct + 1;
        //             cout << ans << "\n";
        //             return 0;
        //         }
        //         ll k = 31 - __builtin_clz(diff);
        //         ll temp = 1LL << k;
        //         ans = diff - temp + 1 + k;
        //     }
        // }
        while (m > n)
        {
            if (m % 2 == 0)
                m /= 2;
            else
                m++;

            ans++;
        }
        ans += (n - m);
        cout << ans << "\n";
    }
    return 0;
}