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
vector<ll> dp(200001, 0);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
   // cin >> t;
    while (t--)
    {    
        int v;
    cin >> v;

    vector<int> a(10);
    for (int i = 1; i <= 9; i++) cin >> a[i];

    vector<int> dp(v + 1, -1);
    dp[0] = 0;

    // Fill DP
    for (int i = 1; i <= v; i++) {
        for (int d = 1; d <= 9; d++) {
            if (i >= a[d] && dp[i - a[d]] != -1) {
                dp[i] = max(dp[i], dp[i - a[d]] + 1);
            }
        }
    }

    // Find best number of digits
    int best = -1;
    for (int i = 0; i <= v; i++) {
        best = max(best, dp[i]);
    }

    if (best <= 0) {
        cout << -1 << endl;
        return 0;
    }

    // Find corresponding paint
    int paint = -1;
    for (int i = v; i >= 0; i--) {
        if (dp[i] == best) {
            paint = i;
            break;
        }
    }

    // Reconstruct answer
    string result = "";
    int remaining_digits = best;

    while (remaining_digits > 0) {
        for (int d = 9; d >= 1; d--) {
            if (paint >= a[d] &&
                dp[paint - a[d]] == remaining_digits - 1) {

                result += char('0' + d);
                paint -= a[d];
                remaining_digits--;
                break;
            }
        }
    }

    cout << result << endl;
}
}