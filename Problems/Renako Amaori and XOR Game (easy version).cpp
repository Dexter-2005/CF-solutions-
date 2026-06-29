#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int mxXor = 0;
    for (int i = 0; i < n; i++) {
        mxXor = max(mxXor, a[i] ^ b[i]);
    }

    int BITS = 1;
    while ((1 << BITS) <= mxXor) BITS++;

    vector<long long> vbit1(BITS, 0), vbit2(BITS, 0);

    for (int i = 0; i < n; i++) {
        int x = a[i] ^ b[i];

        for (int pos = 0; pos < BITS; pos++) {
            int bit = BITS - 1 - pos; // MSB -> LSB

            if (x & (1 << bit)) {
                if (i % 2 == 0)
                    vbit1[pos]++;
                else
                    vbit2[pos]++;
            }
        }
    }

    for (auto x : vbit1) cout << x << ' ';
    cout << '\n';

    for (auto x : vbit2) cout << x << ' ';
    cout << '\n';
}