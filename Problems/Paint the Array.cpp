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
#define fori(i,a,b) for(ll i=a;i<b;i++)
const ll INF = 1e18;
const ll MOD = 1e9+7;

ll gcd(ll a,ll b){ return b?gcd(b,a%b):a; }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t=1;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll> a(n);
        fori(i,0,n) cin>>a[i];
        ll gcd1=a[0];
        ll gcd2=a[1];
        fori(i,0,n) {
            if(i%2==0) gcd1=gcd(gcd1,a[i]);
            else gcd2=gcd(gcd2,a[i]);
        }
        bool f1=true,f2=true;
        fori(i,0,n) {
            if(i%2==0 && a[i]%gcd2==0) f1=false;
            if(i%2==1 && a[i]%gcd1==0) f2=false;
        }
        if(f1) cout<<gcd2<<"\n";
        else if(f2) cout<<gcd1<<"\n";
        else cout<<"0\n";
       

    }
}