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
    {       ll n;
        cin >> n;
        bool done = false;
        for(int i = 1 ; i <= 2*n - 2 ; i+=2) {
            cout << '?' << ' ' << i << ' ' << i + 1 << endl;
            ll x;
            cin >> x;
            if(x == 1) {
                cout << '!' << ' ' << i << endl;
                done = true;
                break;
            }
        }
        if(!done) {
            cout << '?' << ' ' << 2*n - 1 << ' ' << 1 << endl;
            ll y;
            cin >> y;
            if(y == 1) {
                cout << '!' << ' ' << 1 << endl;
            }
            else {
                cout << '?' << ' ' << 2*n - 1 << ' ' << 2 << endl;
                ll z;
                cin >> z;
                if(z == 1) {
                    cout << '!' << ' ' << 2*n - 1 << endl;
                }
                else {
                    cout << '!' << ' ' << 2*n << endl;
                }
            }
        }

    }
}