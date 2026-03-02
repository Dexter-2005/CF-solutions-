#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long x) {
    long long r = sqrt(x);
    return r * r == x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long total = 1LL * n * (n + 1) / 2;

        if (isPerfectSquare(total)) {
            cout << "-1\n";
            continue;
        }

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = i + 1;
        }

        long long sum = 0;

        for (int i = 0; i < n - 1; ++i) {
            sum += arr[i];
            if (isPerfectSquare(sum)) {
                swap(arr[i], arr[i + 1]);
                sum += 1; 
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
