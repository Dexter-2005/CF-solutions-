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
const ll MOD = 998244353;

ll fact[200005];
void precompute()
{
fact[0] = 1;
for (ll i = 1; i < 200005; i++)
fact[i] = (fact[i - 1] * i) % MOD;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
precompute();

ll t = 1;
cin >> t;
while (t--)
{
    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> arr;
    ll count = 1;

    fori(i, 1, n)
    {
        if (s[i] == s[i - 1])
            count++;
        else
        {
            arr.pb(count);
            count = 1;
        }
    }

    arr.pb(count);
    ll ans1 = 0;
    ll ans2 = 1;

    fori(i, 0, arr.size())
    {
        ans1 += (arr[i] - 1);
        ans2 = (ans2 * arr[i]) % MOD;
    }

    ans2 = (ans2 * fact[ans1]) % MOD;
    cout << ans1 << " " << ans2 << "\n";
}
return 0;
}