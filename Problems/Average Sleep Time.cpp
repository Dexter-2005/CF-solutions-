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
  //  cin >> t;
    while (t--)
    {
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n);
        fori(i,0,n) cin >> a[i];
        vector<ll> pre(n);
        pre[0]=a[0];
        fori(i,1,n) pre[i]=pre[i-1]+a[i];
        pre.pb(0);
        sort(all(pre));
         //fori(i,0,n+1) cout << pre[i] <<" ";
       
        double ukmkc=0;
        fori(i,k,n+1){
            ukmkc+=pre[i]-pre[i-k];
        }
        //cout << ukmkc <<"\n";
        double chut = n-k+1;
        double ans=(ukmkc/chut);
        cout << setprecision(15)<< ans << endl;
  
    }
    return 0;
}