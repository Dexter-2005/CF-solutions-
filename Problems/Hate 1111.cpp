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
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const int MAXN=2e5+5;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void debug(vector<int> &v)
{
for (auto x : v) cout << x << " ";
cout << endl;
} 
struct node{int b,c;}a[MAXN];

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

ll t;
t=1;
cin>>t;

while (t--)
{    
    ll x;
    cin >> x;
    vector<bool> dp(x+1,false);
    dp[0]=true;
    fori(i,1,x+1){
        ll j=11;
        while(j<=i){
            if(dp[i-j]==true) dp[i]=true;
            j=j*10+1;
        }
    }
    cout << (dp[x]?"YES":"NO") << endl;

  

}
return 0;
}