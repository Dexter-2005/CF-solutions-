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
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

void dfs(int node, int parent, vector<vector<ll>> &adj, vector<ll> &iscat, vector<bool> &isleaf, int m, vector<int> &ans) {
    // base / initial setup
    int maxi = 1;

    // process current node (you can add logic here)

    // // check if leaf (excluding root case if needed)
    // if (adj[node].size() == 1 && parent != -1) {
    //     isleaf[node] = true;
    // }

    // traverse children
   
    for (auto &child : adj[node]) {
        if (child == parent) continue;
        
        // call DFS on child
        else{
           if(iscat[child] && iscat[parent]) {
           
             }
         dfs(child, node, adj, iscat, isleaf, m, ans);
        }
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<ll> iscat(n+1,0);
        fori(i,0,n) {
            cin >> iscat[i+1];
        }
        vector<vector<ll>> adj(n+1);
        fori(i,1,n) {
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        vector<bool> isleaf(n+1,0);
        fori(i,1,n+1) {
            if (adj[i].size() == 1) {
                isleaf[i] = 1;
            }
        }
        vector<int> ans(n+1,0);
        dfs(1,0,adj,iscat,isleaf,m,ans);
        cout << ans << "\n";
       
    }
    return 0;
}