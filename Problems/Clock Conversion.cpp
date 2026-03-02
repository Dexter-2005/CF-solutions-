#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string str;
        getline(cin, str);  

        int hour = (str[0] - '0') * 10 + (str[1] - '0');
        string minutes = str.substr(2);

        string period = "AM";

        if (hour == 0) {
            hour = 12;
        } else if (hour == 12) {
            period = "PM";
        } else if (hour > 12) {
            hour -= 12;
            period = "PM";
        }

        if (hour < 10)
            cout << '0';

        cout << hour << minutes << " " << period << "\n";
    }

    return 0;
}
