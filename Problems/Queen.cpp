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
void dfs(ll node, vector<vector<ll>> &adj, vector<ll> &val, vector<ll> &ans)
{
      ll cnt=0,c=0;
      for (auto child : adj[node])
    {
        dfs(child, adj, val, ans);
        if(val[child]==1) cnt++;
        c++;
    }
    if(cnt==c && val[node]==1) ans.pb(node);
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
        vector<vector<ll>> adj(n + 1);
        vector<ll> val(n+1,0);
        ll root=-1;
        ll i=1;
        while(n--){
            ll u,x;
            cin >> u >> x;
            val[i]=x;
            if(u==-1) root=i;
            else adj[u].pb(i);
            i++;
        }
        vector<ll> ans;
        dfs(root,adj,val,ans);
        sort(all(ans));
        if(ans.size()==0) cout << -1 << endl;
        else{
            for(auto x:ans) cout << x << " ";
            cout << endl;
        }


      
    }

    return 0;
}