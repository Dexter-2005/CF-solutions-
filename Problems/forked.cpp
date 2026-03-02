#include <iostream>
#include <set>
using namespace std;

int count(int kx, int ky, int qx, int qy, int a, int b) {
    set<pair<int, int>> k_points = {
        {kx + a, ky + b}, {kx + a, ky - b},
        {kx - a, ky + b}, {kx - a, ky - b},
        {kx + b, ky + a}, {kx + b, ky - a},
        {kx - b, ky + a}, {kx - b, ky - a}
    };

    set<pair<int, int>> q_points = {
        {qx + a, qy + b}, {qx + a, qy - b},
        {qx - a, qy + b}, {qx - a, qy - b},
        {qx + b, qy + a}, {qx + b, qy - a},
        {qx - b, qy + a}, {qx - b, qy - a}
    };

    int common = 0;
    for (const auto& p : k_points) {
        if (q_points.count(p)) ++common;
    }
    return common;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, kx, ky, qx, qy;
        cin >> a >> b >> kx >> ky >> qx >> qy;

        cout << count(kx, ky, qx, qy, a, b) << '\n';
    }

    return 0;
}
