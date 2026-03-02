#include <iostream>
#include <vector>
using namespace std;

void findMinMax(const vector<int>& arr, int& minVal, int& maxVal) {
    minVal = arr[0];
    maxVal = arr[0];

    for (int val : arr) {
        if (val < minVal) minVal = val;
        if (val > maxVal) maxVal = val;
    }
}

int main() {
    int testcases;
    cin >> testcases;

    while (testcases--) {
        int n, t;
        int who = 0;
        cin >> n >> t;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int minVal, maxVal;
        findMinMax(arr, minVal, maxVal);
        while (maxVal - minVal > t) {
            bool changed = false;
            for (int i = 0; i < n; i++) {
                if (arr[i] == minVal && arr[i] > 0) {
                    arr[i]--;
                    who++;
                    changed = true;
                }
            }
            findMinMax(arr, minVal, maxVal);
            if (!changed) break; 
        }

        cout << (who % 2 == 0 ? "Tom" : "Jerry") << endl;
    }

    return 0;
}
