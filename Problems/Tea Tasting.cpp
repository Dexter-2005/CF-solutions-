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
        ll n;
        cin>>n;
        vector<ll> a(n),b(n),pre(n),diff(n+1,0),drunk(n,0);
        fori(i,0,n) cin>>a[i];
        fori(i,0,n) cin>>b[i];
        pre[0]=b[0];
        fori(i,1,n) pre[i]=pre[i-1]+b[i];
        fori(i,0,n)
        {
            ll base=(i==0?0:pre[i-1]);
            ll target=base+a[i];
            ll k=lower_bound(pre.begin()+i,pre.end(),target)-pre.begin();
            diff[i]+=1;
            diff[k]-=1;
            if(k<n)
            {
                ll before=(k==i?base:pre[k-1]);
                drunk[k]+=target-before;
            }
        }
        ll cov=0;
        fori(i,0,n)
        {
            cov+=diff[i];
            drunk[i]+=cov*b[i];
        }
        fori(i,0,n) cout<<drunk[i]<<" ";
        cout<<endl;
    

    }
    return 0;
    }