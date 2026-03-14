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

    int n, q;
    cin >> n >> q;

    vector<pair<int, int>> v(n, {0, 0});

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
    }

    pair<int, int> global = {0, -1};

    long long sum = 0;
    for (int i = 0; i < n; i++) 
        sum += v[i].first;
    for (int it = 1; it <= q; it++)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            int ind, val;
            cin >> ind >> val;
            ind--;

            if (v[ind].second > global.second)
            {
                sum += (val - v[ind].first);
            }
            else
            {
                sum += (val - global.first);
            }

            v[ind].first = val;
            v[ind].second = it;
        }
        else
        {
            int val;
            cin >> val;
            global.first = val;
            global.second = it;

            sum = (long long)(val)*n;
        }

        cout << sum << "\n";
    }
}
