#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

const int MAXN = 100000;

bool isbinary(int x) {
    while (x > 0) {
        int d = x % 10;
        if (d != 0 && d != 1) return false;
        x /= 10;
    }
    return true;
}

int main() {
    
    vector<int> binarydecimals;
    for (int i = 1; i <= MAXN; ++i) {
        if (isbinary(i)) {
            binarydecimals.push_back(i);
        }
    }

   
    vector<bool> possible(MAXN + 1, false);
    possible[1] = true;

    queue<int> q;
    q.push(1);

    while (!q.empty()) {
        int curr = q.front(); q.pop();

        for (int b : binarydecimals) {
            long long next = 1LL * curr * b;
            if (next > MAXN) continue;
            if (!possible[next]) {
                possible[next] = true;
                q.push((int)next);
            }
        }
    }

    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (possible[n]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
