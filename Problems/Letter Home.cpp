#include <bits/stdc++.h>
using namespace std;

void findMinMax(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n, s;
        cin >> n >> s;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int minPos = 0, maxPos = 0;
        findMinMax(arr, n, &minPos, &maxPos);

        int steps = 0;

        if (s <= minPos) {
            steps = maxPos - s;
        }
        else if (s >= maxPos) {
            steps = s - minPos;
        }
        else {
            steps = (maxPos - minPos) + min(s - minPos, maxPos - s);
        }

        cout << steps << "\n";
    }

    return 0;
}
