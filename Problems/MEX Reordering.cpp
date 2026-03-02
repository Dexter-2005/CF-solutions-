#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int count0=0;
        int count1=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]==0) count0++;
            if(a[i]==1) count1++;
        }
        if(count0==0) {
            cout <<"NO\n";
            continue;
        }
        else if(count0==1){
            cout <<"YES\n";
            continue;
        }
        else {
            if(count1==0) {
                cout <<"NO\n";
                continue;
            }
            else {
                cout <<"YES\n";
                continue;
            }
        }


        
       
        
    }
    return 0;
}