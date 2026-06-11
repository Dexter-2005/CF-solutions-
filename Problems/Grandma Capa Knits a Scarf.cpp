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
	{
		ll n;
		cin >> n;
		string s;
		cin >> s;
		ll ans = INF;
		for (char c = 'a'; c <= 'z'; c++)
		{
			ll tmp = 0;
			bool isposs = true;
			ll i = 0, j = n - 1;
			while (i < j)
			{
				if (s[i] == s[j])
				{
					i++;
					j--;
					continue;
				}
				if (s[i] == c)
				{
					tmp++;
					i++;
				}
				else if (s[j] == c)
				{
					tmp++;
					j--;
				}
				else
				{
					isposs = false;
					break;
				}
			}
			if (!isposs)
				tmp = INT_MAX;
			ans = min(ans, tmp);
		}
		if (ans == INT_MAX)
			ans = -1;
		cout << ans << "\n";
	}
	return 0;
}