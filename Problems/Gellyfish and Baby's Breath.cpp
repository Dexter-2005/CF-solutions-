#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // For std::gcd

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int g = a[0];
        for (int i = 1; i < n; ++i) {
            g = gcd(g, a[i]);
        }

        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] != g) count++;
        }

        cout << count << endl;
    }

    return 0;
}
