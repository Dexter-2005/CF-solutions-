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
       vector<ll>bits(30, 0);
         fori(i, 0, n)
         {
              fori(j, 0, 30)
              {
                if (a[i] & (1 << j))
                     bits[j]++;
              }
         }
         fori(i,1,n+1){
            bool flag=true;
            fori(j,0,30){
                if(bits[j]%i!=0){
                    flag=false;
                }
            }
            if(flag){
                cout << i << " ";
            }
         }
            cout << endl;
         


    }
}