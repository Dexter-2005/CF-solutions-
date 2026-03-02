#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct State {
    int pos;
    int step;
    long long k;
    long long result;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n, x;
        long long k;
        string s;
        cin >> n >> x >> k >> s;

        int pos = x;
        int step = 0;
        long long result = 0;

        vector<State> visited;

        while (k > 0) {
            bool found_cycle = false;
            for (auto &st : visited) {
                if (st.pos == pos && st.step == step) {
                    
                    long long cyclelength = st.k - k;
                    long long cyclehits = result - st.result;

                    if (cyclelength == 0) {
                        found_cycle = true;
                        break; 
                    }

                    long long repeats = k / cyclelength;
                    result += repeats * cyclehits;
                    k -= repeats * cyclelength;
                    found_cycle = true;
                    break;
                }
            }
            if (found_cycle) break;

            visited.push_back({pos, step, k, result});

            if (s[step] == 'L') pos--;
            else pos++;

            step++;
            k--;

            if (pos == 0) {
                result++;
                step = 0;
            }

            if (step == n) {
                if (pos == 0) {
                    result++;
                    step = 0;
                } else {
                    break;
                }
            }
        }

        cout << result << "\n";
    }

    return 0;
}
