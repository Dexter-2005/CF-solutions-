#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int inc=0;
        int dec=0;
        int start=n/2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                a[i]=start-inc;
                inc++;
                
            }
            else{
                a[i]=start+dec;
                dec++;
                
            }
        }
       
            
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        
        

        
    }
    return 0;
}