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
        ll n,c;
        cin >> n >> c;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> ans(n);
        for (ll i = 0; i < n; i++)
        {
            ans[i] = (a[i] +i+1);
        }
            sort(ans.begin(), ans.end());
        ll ans1=0;
        for (ll i = 0; i < n; i++)
        {
            if(ans[i]<=c){
                ans1++;
                c-=ans[i];
            }
            else{
                break;
            }
        }
        // vector<ll> prefix(n);
        // prefix[0] = ans[0];
        // for (ll i = 1; i < n; i++)
        // {
        //     prefix[i] = prefix[i - 1] + ans[i];
        // }
        // ll cnt=0;
        // ll ans1=0;
        // ll i=0;
        // ll j=0;
        // while (i < n && j < n)
        // {
        //     if (prefix[j] - (i > 0 ? prefix[i - 1] : 0) <= c)
        //     {
        //         ans1 = max(ans1, j - i + 1);
        //         j++;
        //     }
        //     else
        //     {
        //         i++;
        //     }
        // }
        cout << ans1 << "\n";

        
            }

    return 0;
}

// 4 16
// 4 7 3 1  -> 5 9 6 5
// prefix -> 5 14 20 25