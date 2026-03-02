#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int size = 2 * n;

        for (int i = 0; i < n; ++i)
        {
            string row1 = "", row2 = "";
            for (int j = 0; j < n; ++j)
            {
                if ((i + j) % 2 == 0)
                {
                    row1 += "##";
                    row2 += "##";
                }
                else
                {
                    row1 += "..";
                    row2 += "..";
                }
            }
            cout << row1 << '\n'
                 << row2 << '\n';
        }
    }
    return 0;
}
