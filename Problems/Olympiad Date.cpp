#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int r[10] = {0};
        r[0] = 3;
        r[1] = 1;
        r[2] = 2;
        r[3] = 1;
        r[5] = 1;
        int d = 8;
        int a = 0;
        for (int i = 1; i <= n; ++i) {
            int x;
            std::cin >> x;
            if (a == 0) {
                if (r[x] > 0) {
                    r[x]--;
                    d--;
                }
                if (d == 0) {
                    a = i;
                }
            }
        }
        std::cout << a << "\n";
    }
    return 0;
}
