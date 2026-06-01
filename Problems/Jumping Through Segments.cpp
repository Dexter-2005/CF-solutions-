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

vector<pair<ll, ll>> seg(200000);

bool isPossible(ll n, ll maxjump)
{
    ll currminpos = 0;
    ll currmaxpos = 0;

    fori(i, 0, n)
    {
        currmaxpos += maxjump;
        currminpos -= maxjump;

        ll rstart = max(currminpos, seg[i].first);
        ll rend = min(currmaxpos, seg[i].second);

        if (rstart > rend)
            return false;

        currminpos = rstart;
        currmaxpos = rend;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        fori(i, 0, n)
        {
            cin >> seg[i].first >> seg[i].second;
        }

        ll low = 0, high = 1e9;

        while (low < high)
        {
            ll mid = (low + high) / 2;

            if (isPossible(n, mid))
                high = mid;
            else
                low = mid + 1;
        }

        cout << low << "\n";
    }

    return 0;
}