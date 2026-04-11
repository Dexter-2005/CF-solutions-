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
        fori(i, 0, n) cin >> a[i];
        ll sum=0;
        fori(i, 0, n) sum+=a[i];
        // bool allpos=true;
        // fori(i, 0, n) if(a[i]<0) allpos=false;
        // if(allpos){
        //     cout<<"YES"<<endl;  
        // }   
        // else{
        //     cout<<"NO"<<endl;
        // }
        ll maxi=0;
        vector<ll> pre(n);
        bool ukmkc=false;
        pre[0]=a[0];
        fori(i,1,n) {
            pre[i]=pre[i-1]+a[i];
            if(pre[i]<=0) ukmkc=true;
        }
        vector <ll> suf(n);
        suf[n-1]=a[n-1];
        for(ll i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+a[i];
            if(suf[i]<=0) ukmkc=true;
        }
        

        ll currsum=0;
        fori(i, 0, n){
            currsum+=a[i];
            maxi=max(maxi,currsum);
            if(currsum<0) currsum=0;
        }
        if(!ukmkc && maxi==sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

      

       
       
        

    }
    return 0;
}