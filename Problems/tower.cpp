#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> numbers(n);
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        vector<int> evenNumbers;
        vector<int> oddNumbers;

        
        for (int num : numbers) {
            if (num % 2 == 0) {
                evenNumbers.push_back(num);
            } else {
                oddNumbers.push_back(num);
            }
        }

        
        sort(evenNumbers.begin(), evenNumbers.end());
        sort(oddNumbers.begin(), oddNumbers.end());

        if (evenNumbers.empty()) {
            
            cout << oddNumbers.back() << "\n";
        } else if (oddNumbers.empty()) {
           
            cout << evenNumbers.back() << "\n";
        } else {
            
            long long answer = 0;
            for (int val : evenNumbers) {
                answer += val;
            }

            
            answer += oddNumbers.back();

            
            for (int i = 0; i < (int)oddNumbers.size() - 1; i++) {
                answer += oddNumbers[i] - 1;
            }

            cout << answer << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
