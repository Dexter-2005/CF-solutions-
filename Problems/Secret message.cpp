#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<string> strips(k);
        for (int i = 0; i < k; i++)
        {
            cin >> strips[i];
        }

        for (int d = 1; d <= n; d++)
        {
            if (n % d != 0)
                continue;

            bool possible = true;
            string result(n, '?');

            for (int r = 0; r < d && possible; r++)
            {

                vector<int> freq(26, 0);

                for (int i = r; i < n; i += d)
                {
                    vector<bool> seen(26, false);
                    for (int j = 0; j < k; j++)
                    {
                        seen[strips[j][i] - 'a'] = true;
                    }
                    for (int c = 0; c < 26; c++)
                    {
                        if (seen[c])
                            freq[c]++;
                    }
                }

                int needed = n / d;
                int chosen = -1;

                for (int c = 0; c < 26; c++)
                {
                    if (freq[c] == needed)
                    {
                        chosen = c;
                        break;
                    }
                }

                if (chosen == -1)
                {
                    possible = false;
                }
                else
                {
                    for (int i = r; i < n; i += d)
                    {
                        result[i] = char('a' + chosen);
                    }
                }
            }

            if (possible)
            {
                cout << result << "\n";
                break;
            }
        }
    }

    return 0;
}
