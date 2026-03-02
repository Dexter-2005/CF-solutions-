#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getmax(const vector<vector<int>> &mat, int n, int m)
{
    int maxval = mat[0][0];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            maxval = max(maxval, mat[i][j]);
    return maxval;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> original(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> original[i][j];

        int answer = 1e9;

        for (int r = 0; r < n; ++r)
        {
            for (int c = 0; c < m; ++c)
            {

                vector<vector<int>> temp = original;

                for (int j = 0; j < m; ++j)
                    temp[r][j]--;

                for (int i = 0; i < n; ++i)
                    temp[i][c]--;

                temp[r][c]++;

                int currentmax = getmax(temp, n, m);
                answer = min(answer, currentmax);
            }
        }

        cout << answer << '\n';
    }

    return 0;
}
