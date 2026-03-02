#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    if (n == 1)
    {
        cout << max(a[0], b[0]) << "\n";
        return 0;
    }

    if (n == 2)
    {
        cout << max(a[0] + b[1], b[0] + a[1]) << "\n";
        return 0;
    }

    a[1] = b[0] + a[1];
    b[1] = a[0] + b[1];

    for (int i = 2; i < n; i++)
    {
        int oldA = a[i];
        int oldB = b[i];

        a[i] = oldA + max(b[i - 1], b[i - 2]);
        b[i] = oldB + max(a[i - 1], a[i - 2]);
    }

    cout << max(a[n - 1], b[n - 1]) << "\n";

    return 0;
}
