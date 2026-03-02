#include <iostream>
using namespace std;

const int N = 205;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        long long c, d;
        cin >> a >> b >> c >> d;

        long long dis[N];
        bool vis[N];
        for (int i = 0; i < N; i++) {
            dis[i] = -1;
            vis[i] = 0;
        }

        int q[2 * N];
        int f = 0, r = 0;

        dis[a] = 0;
        vis[a] = 1;
        q[r++] = a;

        while (f < r) {
            int v = q[f++];
            if (v == b) break;

            if (v + 1 < N) {
                long long cost = dis[v] + c;
                if (!vis[v + 1] || cost < dis[v + 1]) {
                    dis[v + 1] = cost;
                    vis[v + 1] = 1;
                    q[r++] = v + 1;
                }
            }

            int w = v ^ 1;
            if (w >= 0 && w < N) {
                long long cost = dis[v] + d;
                if (!vis[w] || cost < dis[w]) {
                    dis[w] = cost;
                    vis[w] = 1;
                    q[r++] = w;
                }
            }
        }

        cout << dis[b] << "\n";
    }
    return 0;
}
