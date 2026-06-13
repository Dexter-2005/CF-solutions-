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
        vector<ll> a(n);
        vector<ll> b(n);
        fori(i, 0, n) cin >> a[i];
        fori(i, 0, n) cin >> b[i];
        vector<ll> ans(n);
        if(a[n-1]!=b[n-1]){
            cout<<"NO\n";
            continue;
        }
        fori(i, 0, n){
            ans[i]=a[i]^b[i];
        }
        bool temp=true;
        for(ll i=n-2;i>=0;i--){
            if(ans[i]!=0 &&(ans[i]!=a[i+1]) && ans[i]!=(a[i+1]^ans[i+1])){
                temp=false;
                break;
            }
        }
        if(temp) cout<<"YES\n";
        else cout<<"NO\n";
    
    }
    return 0;
}