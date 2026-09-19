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
        cin>>t;

        vector<ll> fact;
        ll x=1;
        ll i=1;

        while(x<=1000000000000LL)
        {
            fact.pb(x);
            i++;
            x*=i;
        }

        while(t--)
        {
            ll n;
            cin>>n;
            map<ll,ll> dp;
            dp[0]=0;

            for(ll x:fact)
            {
                map<ll,ll> ndp=dp;
                for(auto p:dp)
                {
                    ll sum=p.first;
                    ll cnt=p.second;

                    if(sum+x<=n)
                    {
                        if(!ndp.count(sum+x))
                        {
                            ndp[sum+x]=cnt+1;
                        }
                        else
                        {
                            ndp[sum+x]=min(ndp[sum+x],cnt+1);
                        }
                    }
                }

                dp=ndp;
            }

            ll ans=inf;
            for(auto p:dp)
            {
                ll sum=p.first;
                if(sum<=n)
                {
                    ll rem=n-sum;
                    if(rem<(1LL<<40))
                    {
                        ll cnt=p.second+__builtin_popcountll(rem);
                        ans=min(ans,cnt);
                    }
                }
            }
            if(ans==inf)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<ans<<endl;
            }
        }

        return 0;
    }