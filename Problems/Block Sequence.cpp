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

void debug(vector<ll> &v)
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
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        fori(i, 0, n) cin >> arr[i];
        vector<ll> dp(n+1,inf);
        dp[n]=0;
        for (int i=n-1;i>=0;i--) {
            dp[i]=dp[i+1]+1;                    
            if(i+arr[i]+1<=n) dp[i]=min(dp[i],dp[i+arr[i]+1]);
        }
        cout << dp[0] << "\n";
    }
}