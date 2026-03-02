#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCount;
    cin >> testCount;

    while (testCount--) {
        int size;
        cin >> size;

        vector<int> data(size);
        for (int idx = 0; idx < size; ++idx) {
            cin >> data[idx];
        }

        sort(data.begin(), data.end());

        if ((data.front() + data.back()) % 2 == 0) {
            cout << 0 << '\n';
        } else {
            int minSteps = INT_MAX;
            int evenRemovals = 0;
            int oddRemovals = 0;

            if (data.front() % 2 == 0) {
                 int right = size - 1;
                while (right >= 0 && data[right] % 2 != 0) {
                    oddRemovals++;
                    right--;
                }

                int left = 0;
                while (left < size && data[left] % 2 == 0) {
                    evenRemovals++;
                    left++;
                }

               

                minSteps = min(evenRemovals, oddRemovals);
            } else {
                
                int right = size - 1;
                while (right >= 0 && data[right] % 2 == 0) {
                    oddRemovals++;
                    right--;
                }

                int left = 0;
                while (left < size && data[left] % 2 != 0) {
                    evenRemovals++;
                    left++;
                }


                minSteps = min(evenRemovals, oddRemovals);
            }

            cout << minSteps << '\n';
        }
    }

    return 0;
}
