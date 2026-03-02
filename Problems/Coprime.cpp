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
#define fori(i,a,b) for(ll i=a;i<b;i++)

ll gcd(ll a,ll b){ return b?gcd(b,a%b):a; }

void solve(){
    ll n;
    cin>>n;
    vector<ll> last(1001,-1);
    fori(i,0,n){
        ll x;
        cin>>x;
        last[x]=i+1;
    }
    ll ans=-1;
    for(ll i=1;i<=1000;i++){
        if(last[i]==-1) continue;
        for(ll j=1;j<=1000;j++){
            if(last[j]==-1) continue;
            if(gcd(i,j)==1){
                ans=max(ans,last[i]+last[j]);
            }
        }
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--) solve();
}