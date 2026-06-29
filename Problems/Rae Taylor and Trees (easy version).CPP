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

void debug(vector<ll> &v)
{
    for (auto x : v) cout << x << " ";
    cout << endl;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    while (t--)
    {
            ll n;
            cin >> n;
            vector<ll> a(n);
            fori(i, 0, n) cin >> a[i];
            vector<ll> suffmax(n);
            suffmax[n - 1] = a[n - 1];
            for(ll i = n - 2; i >= 0; i--)
            {
                suffmax[i] = max(suffmax[i + 1], a[i]);
            }
            if(suffmax[n-1]==n)
            {
                cout << "Yes\n";
                continue;
            }
            vector<ll> premin(n);
            premin[0] = a[0];
            fori(i, 1, n)
            {
                premin[i] = min(premin[i - 1], a[i]);
            }
            bool check = true;
            fori(i, 0, n-1)
            {
               if(suffmax[i]!=suffmax[i+1]){
                if(premin[i]>suffmax[i+1]){
                    check = false;
                    break;
                }
               }
            }
            if(check) cout << "Yes\n";
            else cout << "No\n";

            
            
        
    }
    

    return 0;
}