#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long num = n * (n - 1) / 2;

        vector<long long> arr(num);
        for (long long i = 0; i < num; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());

        long long temp = n - 1;
        for (long long i = 0; i < num; i += (temp--)) {
            cout << arr[i] << " ";
        }
        cout << arr[num - 1] << "\n";
    }

    return 0;
}
