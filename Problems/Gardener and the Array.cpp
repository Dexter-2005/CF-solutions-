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

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
          int n;
        cin >> n;

        map<int, int> mp;
        vector<vector<int>> arr(n);

        fori(i, 0, n) {
            int k;
            cin >> k;
            arr[i].resize(k);

            fori(j, 0, k) {
                cin >> arr[i][j];
                mp[arr[i][j]]++;
            }
        }

        bool ok = false;

        fori(i, 0, n) {
            bool valid = true;

            fori(j, 0, arr[i].size()) {
                if (mp[arr[i][j]] <= 1) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                ok = true;
                break;
            }
        }

        if (ok) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}