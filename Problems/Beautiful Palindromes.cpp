#include <bits/stdc++.h>
using namespace std;


//frequency map taken as reference 
// brute force method 

vector<int> miss(const vector<int> &arr, int n) {
    vector<bool> present(n + 1, false);
    vector<int> missing;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= n)
            present[arr[i]] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!present[i])
            missing.push_back(i);
    }

    return missing;
}

vector<int> insert(const vector<int> &result, int k, int n) {
    vector<int> added;
    for (int i = n; i >= 1 && added.size() < k; i--) {
        bool present1 = false;
        for (int j = 0; j < result.size(); j++) {
            if (result[j] == i) {
                present1 = true;
                break;
            }
        }
        if (!present1)
            added.push_back(i);
    }
    return added;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> missing = miss(a, n);
        vector<int> result;

        for (int i = 0; i < missing.size() && result.size() < k; i++)
            result.push_back(missing[i]);

        int remaining = k - result.size();
        if (remaining > 0) {
            vector<int> added = insert(result, remaining, n);
            for (int i = 0; i < added.size(); i++)
                result.push_back(added[i]);
        }

        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
        cout << "\n";
    }

    return 0;
}
