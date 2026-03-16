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

ll lcm2(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

ll lcm3(ll a, ll b, ll c)
{
    return lcm2(lcm2(a, b), c);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll a,b,c,m;
        cin>>a>>b>>c>>m;

        ll A = m/a;
        ll B = m/b;
        ll C = m/c;

        ll ab = lcm2(a,b);
        ll bc = lcm2(b,c);
        ll ca = lcm2(c,a);
        ll abc = lcm3(a,b,c);

        ll AB = m/ab;
        ll BC = m/bc;
        ll CA = m/ca;
        ll ABC = m/abc;

        ll onlyA = A - AB - CA + ABC;
        ll onlyB = B - AB - BC + ABC;
        ll onlyC = C - BC - CA + ABC;

        ll onlyAB = AB - ABC;
        ll onlyBC = BC - ABC;
        ll onlyCA = CA - ABC;

        ll alice = onlyA*6 + (onlyAB+onlyCA)*3 + ABC*2;
        ll bob   = onlyB*6 + (onlyAB+onlyBC)*3 + ABC*2;
        ll carol = onlyC*6 + (onlyBC+onlyCA)*3 + ABC*2;

        cout<<alice<<" "<<bob<<" "<<carol<<"\n";
    }

}