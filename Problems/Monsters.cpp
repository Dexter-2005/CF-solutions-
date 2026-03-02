#include <bits/stdc++.h>
#define ll long long
using namespace std;

//tle eliminators solution

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll k;
        cin >> k;
        vector<ll> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        vector<pair<ll, int>> v;
        for (int i = 0; i < n; ++i)
        {
            ll x;
            if (arr[i] % k == 0)
                arr[i] = k;
            else
                arr[i] = arr[i] % k;
            v.push_back({arr[i], i + 1});
        }
        sort(v.begin(), v.end(), [](auto &a, auto &b)
             {
            if(a.first==b.first)return a.second<b.second;
            return a.first>b.first; });
        for (auto &p : v)
            cout << p.second << " ";
        cout << endl;
    }

    return 0;
}