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
        ll n,x,m;
        cin >> n >> x >> m;
        bool baby=false;
        // ll lmin,rmax;
        // cin >> lmin >> rmax;
        // if( lmin <=x || rmax >= x) {
        //     baby=true;
        //     lmin=min(lmin,x);
        //     rmax=max(rmax,x);
        // }
        // m--;
        // while(m--){
        //     ll l,r;
        //     cin >> l >> r;
        //     if

        // }
        ll lmin=x,rmax=x;
        while (m--)
        {
            ll l,r;
            cin >> l >> r;
            if( l <=rmax && r >= lmin) {
                baby=true;
                lmin=min(lmin,l);
                rmax=max(rmax,r);
            }


        }
        if(baby) cout << rmax-lmin+1 << "\n";
        else cout << "1\n";
    }
    return 0;
}