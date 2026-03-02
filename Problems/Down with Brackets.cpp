#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int bal = 0;
        bool multiple_blocks = false;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                bal++;
            } else {
                bal--;
            }
            if (bal == 0 && i != s.length() - 1) {
                multiple_blocks = true;
                break;
            }
        }

        if (multiple_blocks) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
