#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long p, q, r, s;
        cin >> p >> q >> r >> s;

        long long smallest = min({p, q, r, s});

        if (smallest == q || smallest == s) {
            cout << "Gellyfish" << '\n';
        } else {
            cout << "Flower" << '\n';
        }
    }

    return 0;
}
