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

void debug(vector<ll> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

void dfs(ll node,ll par,vector<vector<pair<ll,ll>>> &adj,vector<ll> &ans,vector<ll> &v1){
    for(pair<ll,ll> x:adj[node]){
        if(x.first!=par){
            dfs(x.first,node,adj,ans,v1);
           
            if(x.second==2 && v1[x.first]==0){
                v1[x.first]++;
                ans.pb(x.first);
            }
             v1[node]+=v1[x.first];
        }
    }
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<vector<pair<ll,ll>>> adj(n+1); 
        fori(i,0,n-1){
            ll u,v,z;
            cin >> u >> v >> z;
            adj[u].pb({v,z});
            adj[v].pb({u,z});
        }
        vector<ll> ans,v1(n+1,0);
       dfs(1,0,adj,ans,v1);
        cout << ans.size() << endl;
        fori(i,0,ans.size()){
            cout << ans[i] << " ";
        }

    }

    return 0;
}