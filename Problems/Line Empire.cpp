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
    t=1;
    cin>>t;

    while (t--)
    { 
        ll n,a,b;
        cin>>n>>a>>b;

        vector<ll> x(n+1);
        fori(i,1,n+1) cin>>x[i];
        vector<ll> suf(n+2,0);
        for(ll i=n;i>=1;i--)
        {
            suf[i]=suf[i+1]+x[i];
        }
        ll ans=inf;
        for(ll i=0;i<=n;i++)
        {
            ll cur;
            if(i==0){
                cur=b*suf[1];
            }
            else{
                cur=x[i]*(a+b)+(suf[i+1]-(n-i)*x[i])*b;
            }
            ans=min(ans,cur);
        }
        cout<<ans<<endl;
    }

    return 0;
}