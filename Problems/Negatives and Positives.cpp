#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll pos = 0, neg = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                pos++;
            }
            else if (a[i] < 0)
            {
                neg++;
                a[i] = -a[i];
            }
        }
        ll sum=0;
        sort(a.begin(), a.end());
        for(ll i=0;i<n;i++){
            sum+=a[i];
        }
        if(neg==0){
            cout << sum << "\n";  
        }
        else if(neg%2==1){
            cout << sum-2*a[0] << "\n";
        }
        else{
            cout << sum << "\n";

        }
    }

    return 0;
}
