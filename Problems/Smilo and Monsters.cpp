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
    ll n;
    cin>>n;
    vector<ll> a(n);
    fori(i,0,n) cin>>a[i];
    ll sum=accumulate(all(a),0LL);
    ll rem=sum/2;
    ll ans=sum-rem;
    sort(a.rbegin(),a.rend());
    for(auto x:a)
    {
        if(rem<=0) break;
        rem-=x;
        ans++;
    }
    cout<<ans<<'\n';
}
return 0;
}