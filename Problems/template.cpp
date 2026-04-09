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

// funcn taken as reference from geeksforgeeks for prime factorization of a number
vector<int> primefactors(int n)
{
    vector<int> factors;

    while (n % 2 == 0)
    {
        factors.push_back(2);
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 2)
    {
        factors.push_back(n);
    }

    return factors;
}

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
        vector<int> factors = primefactors(n);
        sort(all(factors));
        if (factors.size() < 3)
        {
            cout << "NO\n";
        }
        else if(factors.size()==3 && ( factors[0]!=factors[1] &&factors[1]!=factors[2] &&factors[0]!=factors[2] ))
        {
            cout << "YES\n";
            cout << factors[0] << " " << factors[1] << " " << factors[2] << "\n";
        }
        else if(factors.size() == 4 && (factors[0] != factors[1] && factors[1] != factors[2] && factors[0] != factors[2]))
        {
            cout << "YES\n";
            cout << factors[0] << " " << factors[1] << " " << factors[2]*factors[3] << "\n";
        }
        else if(factors.size() == 5 && (factors[0] != factors[1] && factors[1] != factors[2] && factors[0] != factors[2]))
        {
            cout << "YES\n";
            cout << factors[0] << " " << factors[1] << " " << factors[2]*factors[3]*factors[4] << "\n";
        }
        else
        {
            int a = factors[0];
            int b = factors[1];
            int i = 2;
            
            while (i < factors.size() && b == a)
            {
                b *= factors[i];
                i++;
            }
            
            int c = n / (a * b);

            if (a != b && b != c && a != c && c >= 2)
            {
                cout << "YES\n";
                cout << a << " " << b << " " << c << "\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    
}
return 0;
}