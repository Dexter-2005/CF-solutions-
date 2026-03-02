#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long u64;

u64 mulmod(u64 a, u64 b, u64 mod)
{
    u64 result = 0;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            result = (result + a) % mod;
        a = (2 * a) % mod;
        b >>= 1;
    }
    return result;
}

u64 modpow(u64 base, u64 exp, u64 mod)
{
    u64 result = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1)
            result = mulmod(result, base, mod);
        base = mulmod(base, base, mod);
        exp >>= 1;
    }
    return result;
}

bool isPrime(u64 n)
{
    if (n < 2)
        return false;
    for (u64 a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29})
    {
        if (a >= n)
            break;
        u64 d = n - 1, s = 0;
        while ((d & 1) == 0)
        {
            d >>= 1;
            ++s;
        }
        u64 x = modpow(a, d, n);
        if (x == 1 || x == n - 1)
        
            continue;
        bool composite = true;
        for (int r = 1; r < s; ++r)
        {
            x = mulmod(x, x, n);
            if (x == n - 1)
            {
                composite = false;
                break;
            }
        }
        if (composite)
            return false;
    }
    return true;
}

u64 generateRepeatedNumber(int x, int k)
{
    string repeated;
    string sx = to_string(x);
    for (int i = 0; i < k; ++i)
        repeated += sx;

    if (repeated.size() > 18)
        return 0;

    return stoull(repeated);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;

        u64 temp = generateRepeatedNumber(x, k);
        if (temp != 0 && isPrime(temp))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
