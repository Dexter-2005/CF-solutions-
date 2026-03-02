#include <iostream>
using namespace std;

bool f(int a, int b, int x) {
    if (a < b) return x > a && x < b;
    return x > a || x < b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b || c == d) {
            cout << "NO\n";
            continue;
        }
        if (f(a, b, c) != f(a, b, d)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
write an effective c++ code for the following , use namespace as std , use one digit or one word varaibles do everything in main , dont use underscores and capital letters , it should feel like human written , dont use comments
solve this in similar manner