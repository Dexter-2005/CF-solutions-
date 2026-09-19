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


    vector<ll> dp(MAXN, 0);
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

    vector<ll> palis;
    for (ll i = 1; i < MAXN; i++) {
        string s = to_string(i), r = s;
        reverse(r.begin(), r.end());
        if (s == r) palis.push_back(i);
    }

    dp[0] = 1;
    for (ll p : palis)
        for (ll j = p; j < MAXN; j++)
            dp[j] = (dp[j] + dp[j - p]) % mod;

    ll t;
    t=1;
    cin>>t;

    while (t--)
    {    
        ll n;
        cin >> n;
        // vector<ll> palis;
        // fori(i,1,n+1)
        // {
        //     string s=to_string(i);
        //     string t=s;
        //     reverse(all(t));
        //     if(s==t) palis.pb(i);
        // }
        // vector<ll> dp(n+1,0);
        // dp[0]=1;
        // fori(i,0,palis.size())
        // {
        //     fori(j,palis[i],n+1)
        //     {
        //         dp[j]=(dp[j]+dp[j-palis[i]])%mod;
        //     }
        // }
        cout<<dp[n]<<endl;

        
    

    }
    return 0;
    }