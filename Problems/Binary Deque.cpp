#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1) sum++;
        }

        if (sum < s) {
            cout << "-1\n";
            continue;
        }
        if (sum == s) {
            cout << "0\n";
            continue;
        }

        int i = 0, j = 0, current = 0, maxlen = 0;
        while (j < n) {
            current =current+ arr[j];
            while (current > s) {
                current=current- arr[i];
                i++;
            }
            if (current == s) {
                if (j - i + 1 > maxlen) maxlen = j - i + 1;
            }
            j++;
        }

        cout << n - maxlen << "\n";
    }
    return 0;
}
