#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long positive = 0;
    long long negative = 0;
    long long even = 1;
    long long odd = 0;
    int sign = 1;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        if (number < 0)
        {
            sign = -sign;
        }

        if (sign == 1)
        {
            positive =positive+ even;
            negative =negative+ odd;
            even++;
        }
        else
        {
            positive = positive + odd;
            negative=negative+ even;
            odd++;
        }
    }

    cout << negative << " " << positive;

  return 0;
}