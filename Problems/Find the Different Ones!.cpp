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
        fori(i,0,n) cin >> a[i];

        vector<int> result1;
        vector<int> result2;

        int counter = 1;
        result1.push_back(counter);

        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                counter++;
            }
            result1.push_back(counter);
        }

        int count = 1;
        result2.push_back(count);

        for (int i = 1; i < result1.size(); i++) {
            if (result1[i] == result1[i - 1]) {
                count++;
            } else {
                count = 1;
            }
            result2.push_back(count);
        }

        ll q;
        cin >> q;
        while(q--){
            ll l,r;
            cin >> l >> r;

            if(result1[l-1]==result1[r-1]){
                cout << "-1 -1\n";
            }
            else{
                if(a[l-1]==a[r-1]){
                    ll idx1=l;
                    ll idx2=r-result2[r-1];
                    cout << idx1 <<" " << idx2 << "\n";
                }
                else{
                    cout << l << " " << r << "\n";
                }
            }
            
        }
        cout <<"\n";
    }
}