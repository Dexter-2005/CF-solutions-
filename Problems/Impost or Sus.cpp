#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string r;
        cin >> r;

        int n = r.size(), ans = 0, sc = 0;

        for(int i = 0; i < n; i++){
            if(r[i] == 's')
                sc++;
        }

        if(sc == 0){
            ans = (n + 2) / 2;
            cout << ans << "\n";
            continue;
        }

        for(int i = 0; i < n; i++){
            if(r[i] == 'u'){
                int k = 1;

                while(i+1 < n && r[i+1] == 'u'){
                    k++;
                    i++;
                }

                int left = 0;
                if(i-k >= 0 && r[i-k] == 's')
                    left = 1;

                int right = 0;
                if(i+1 < n && r[i+1] == 's')
                    right = 1;

                if(left == 1 && right == 1)
                    ans += k / 2;
                else
                    ans += (k + 1) / 2;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
