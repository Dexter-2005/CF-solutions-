#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        // int o = 0, z = 0;

        // for(auto it : s){
        //     if(it=='1') o++;
        //     else z++;
        // }

        // // if 1 and then 0 is encountered remove clear all zeros unitl again  one is encountered

        // // for( ll i=1;i<n-1;i++){
        // //     if(s[i]=='1' && s[i+1]=='0'){

        // //     }
        // // }

        // int l = 0, r = n - 1;

        // while(s[l]=='0') l++;
        // while(s[r]=='1') r--;

        // cout << r - l + 1 << endl;

        //check logic, probably correct

        // if 01 appears then delete both or if 10 appears then delete 1 only 
        string res = "";
    bool zero=false;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                if (res.size() == 0 || res.back() == '0') res.push_back(s[i]);
                else {
                    while (i < n && s[i] == '0') i++;
                    res.back() = '0';
                    i--;
                }
                zero=true;
            } else {
                int cnt = 0;
                res.push_back('1');
                while (i < n && s[i] == '1') {
                    cnt++;
                    i++;
                }
                if (i == n) {
                    res += string(cnt - 1, '1');
                } else {
                    i--;
                }
            }
        }
        cout << res << endl;



        // int left = n, right = 0;
        
        // for(int i=0; i<n; i++){
        //     if(s[i]=='1'){
        //         left = i;
        //         break;
        //     }
        // }

        // for(int i=n-1; i>=0; i--){
        //     if(s[i]=='0'){
        //         right = i;
        //         break;
        //     }
        // }
        
        // string res = "";

        // //if(left < right){
        //    // for(int i=0; i<left; i++){
        //        // res += s[i];
        //    // }
        //    // for(int i=right+1; i<n; i++){
        //        // res +=s[i];
        //     //}
        // //}

        // for(int i = 0; i < left;i++){
        //     res += '0';
        // }

        // for(int i = right; i < n; i++){
        //     res += '1';
        // }

        // cout << res << endl;

        // int flag=0;
        // if(s[n-1]=='0') flag=1;

        // int ind=-1;
        // for(int i=n-1;i>=0;i--){
        //     if(s[i]=='1' && flag) {
        //         ind=i;
        //         break;
        //     } 
        //     else if(s[i]=='0'){
        //         flag=1;
        //     }
        // }
        
        // for(int i=ind;i<n;i++){
        //     cout<<s[i]<<"";
        // }
        // cout<<endl;


        
    }
    return 0;
}

//logic is correct, debug output