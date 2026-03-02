#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];

        int s = INT_MAX, S = INT_MIN, d = INT_MAX, D = INT_MIN;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (a[i][j] == '#') {
                    int x = i + j, y = i - j;
                    if (x < s) s = x;
                    if (x > S) S = x;
                    if (y < d) d = y;
                    if (y > D) D = y;
                }

                
        int i = (s + S + d + D) / 4;
        int j = (s + S - d - D) / 4;
        cout << i + 1 << " " << j + 1 << endl;
    }
}
