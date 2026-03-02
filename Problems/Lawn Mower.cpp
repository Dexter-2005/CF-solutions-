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
        ll n,m;

        cin >> n >> m;
        cout << n-(n/m) << "\n";
        
    }

    return 0;
}
