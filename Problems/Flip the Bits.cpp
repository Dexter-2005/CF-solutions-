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
        string a, b;
        cin >> a >> b;

        vector<bool> canflip(n, false);

        ll cta0 = 0, cta1 = 0;

        fori(i, 0, n)
        {
            if (a[i] == '0') cta0++;
            else cta1++;

            if (cta0 == cta1) canflip[i] = true;
        }

        bool isflipped = false;
        bool temp = true;

        for (ll i = n - 1; i >= 0; i--)
        {
            char cur = a[i];

            if (isflipped)
            {
                cur = (cur == '0' ? '1' : '0');
            }

            if (cur == b[i]) continue;

            if (canflip[i])
            {
                isflipped = !isflipped;
            }
            else
            {
                temp = false;
                break;
            }
        }

        if (temp) cout << "YES\n";
        else cout << "NO\n";
    }
}