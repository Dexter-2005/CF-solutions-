#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int a0 = a[0];
        int a1 = a[1];

        int no_op = a0 + min(a0, a1); 
        int with_op = a0 + a1;        

        cout << min(no_op, with_op) << "\n";
    }

    return 0;
}
