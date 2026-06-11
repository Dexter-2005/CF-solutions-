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
        ll n,m,k;
        cin >> n >> m >> k;
        vector<ll> a(n);
        fori(i,0,n) cin >> a[i];
        vector<ll> diff(n-1);
        fori(i,0,n-1) diff[i] = a[i+1] - a[i]-1;
        sort(all(diff));
        ll ans=0;
        fori(i,0,n-k){
            ans+=diff[i];
        }
        ans+=n;
        cout << ans << "\n"; 


        

    
       
    }

        return 0;
    }