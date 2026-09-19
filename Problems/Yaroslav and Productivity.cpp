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
#define all(x) x.begin(),x.end()
#define fori(i,a,b) for(ll i=a;i<b;i++)
const ll inf=1e18;
const ll mod=1e9+7;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void debug(vector<ll>&v)
{
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,b;
        cin>>n>>b;
        vector<ll> a(n);
        fori(i,0,n) cin>>a[i];
        vector<ll> moves(b);
        fori(i,0,b) cin>>moves[i];
        sort(all(moves));
        // vector<ll> nsum(n,0);
        // vector<ll> psum(n,0);
        // fori(i,0,n){
        //     if(i>0){
        //         nsum[i]=nsum[i-1];
        //         psum[i]=psum[i-1];
        //     }
        //     if(a[i]<0) nsum[i]+=a[i];
        //     else psum[i]+=a[i];
        // }
        // ll idx=moves.size()-1;
        // ll fsum=nsum[n-1]+psum[n-1];
        // ll ct=0;
        // while(idx>=0){
        //     ll midx=moves[idx]-1;
        //     ll org=nsum[midx]+psum[midx];
        //     ll cur=org;
        //     if(ct%2!=0){
        //         cur=-org;
        //     }
        //     if(cur<0){
        //         fsum+=abs(cur)*2;
        //         ct++;
        //     }
        //     else if(cur==0){
        //         if(idx>0){
        //             ll nextm=moves[idx-1]-1;
        //             ll norg=nsum[nextm]+psum[nextm];
        //             ll nxt=norg;
        //             if(ct%2!=0){
        //                 nxt=-norg;
        //             }
        //             if(nxt>0){
        //                 ct++;
        //             }
        //         }
        //     }
        //     idx--;
        // }
        ll fsum=0;
        ll lastm=0;
        fori(i,0,b){
            ll cursum=0;
            fori(j,lastm,moves[i]){
                cursum+=a[j];
            }
            fsum+=abs(cursum);
            lastm=moves[i];
        }
        fori(j,lastm,n){
            fsum+=a[j];
        }
        cout<<fsum<<"\n";
    }

    return 0;
}