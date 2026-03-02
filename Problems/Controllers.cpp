#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD=676767677;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=0,y=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='+') x++;
        else y++;
    }
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll rem=0;
        ll c=0;
        ll y1=0;
        ll y2=y;

        if(x==y){
            cout << "YES\n";
        }
        else if(b==a ){
            if(x==y){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";

            }
        }
        else{
            rem=(a* abs(x-y))%abs(b-a);
            if(rem!=0){
                cout << "NO\n";
            }
            else{
                c=a*(x-y)/(b-a);
                ll x1=c;
                ll x2=x+c;
                ll r1=max(x1,x2);
                ll r2=min(x1,x2);
                ll r3=max(y1,y2);
                ll r4=min(y1,y2);
                if(r1<r4 || r2>r3){
                    cout << "NO\n";
                }
                else{
                    cout << "YES\n";
                }




            }

        }

    }




    

        
        

        
    
}
