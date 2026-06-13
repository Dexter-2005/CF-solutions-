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

vector<ll> a(100005,0),b(100005,0);
bool check(ll ans,ll k , ll n){
    ll rem=k;
    fori(i,0,n){
       if(b[i]/a[i]<ans) {
        if(rem>0) rem=rem-(a[i]*ans-b[i]);
       }
       else return false;
    }
    return true;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;  
    while (t--)
    {
        // used binary search on answer

        ll n,k;
        cin >> n >> k;
        fori(i,0,n) cin >> a[i];
        fori(i,0,n) cin >> b[i];
        ll maxi=0;
        fori(i,0,n){
            maxi=max((b[i]+k)/a[i],maxi);
        }
        ll r = maxi;
        ll l = 0;
        while(l < r){
            ll mid = l + (r - l) / 2;
            if(check(mid, k, n)) r = mid;
            else l = mid + 1;
        }
        cout << l << '\n';

    }
    return 0;
}