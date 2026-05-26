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
        // post contest submission
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> ans;
        bool allone=true;
        bool allzero=true;
        
        fori(i, 0, n){ 
            cin >> a[i];
            if(a[i]>0) a[i]=0;
            else a[i]=1;
        }
        for(auto i:a){
            if(i==0) allzero=false;
            else allone=false;
        }
        fori(i, 0, n-1){
           if(a[i]==1 && a[i+1]==0){
               ans.pb(i+2);
           }
        }
         for(ll i=n-1;i>0;i--){
           if(a[i]==0 && a[i-1]==1){
               ans.pb(i);
           }
        }
        if(allone) {
            cout << 1 << "\n" << n << "\n";
            continue;
        }
        cout << ans.size() << "\n";
        for(auto i:ans) cout << i << " ";
        cout << "\n";
        




    }

    return 0;
}