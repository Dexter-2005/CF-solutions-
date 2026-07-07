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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
       // approach -> freq arr banai -> 0 se max freq tak sare minus kiye -> used upperbound for rem elements -> check if k is enough to make all freq equal to i -> if yes then add rem in set
        
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        fori(i,0,n) cin>>a[i];
        vector<ll>freq;
        ll ct=1;
        fori(i,1,n)
        {
            if(a[i]==a[i-1]) ct++;
            else
            {
                freq.pb(ct);
                ct=1;
            }
        }
        freq.pb(ct);
        sort(all(freq));
        vector<ll> pre(freq.size());
        pre[0]=freq[0];
        fori(i,1,freq.size()) pre[i]=pre[i-1]+freq[i];
        ll maxi=*max_element(all(freq));
        set<ll> validrem; 
        fori(i,0,maxi){
            ll st=upper_bound(all(freq),i)-freq.begin();
            ll rem=freq.size()-st;
            if (rem == 0) continue; 
            ll sum = pre[freq.size()-1];
            if (st > 0) {
                sum -= pre[st-1];
            }
            ll curlen = sum-rem*i;
            if (k >= curlen && (k-curlen)%rem ==0) {
                validrem.insert(rem);
            }
        }
        cout << validrem.size() << "\n";
    }

    return 0;
}