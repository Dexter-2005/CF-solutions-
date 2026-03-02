#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n) , b(n) , c(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) cin >> c[i];
        long long max1 = 0 , max2 = 0 , max3 = 0 , index1 = -1 , index2 = -1 , ans = 0;
 
        for(int i = 0 ; i < n ; i++) {
            if(a[i] > max1) {
                max1 = a[i];
                index1 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && b[i] > max2) {
                max2 = b[i];
                index2 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && i != index2 && c[i] > max3) {
                max3 = c[i];
            }
        }
        ans = max(ans , (max1 + max2 + max3));
        max1 = max2 = max3 = 0 , index1 = index2 = -1;
 
 
 
        for(int i = 0 ; i < n ; i++) {
            if(a[i] > max1) {
                max1 = a[i];
                index1 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && c[i] > max2) {
                max2 = c[i];
                index2 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && i != index2 && b[i] > max3) {
                max3 = b[i];
            }
        }
        ans = max(ans , (max1 + max2 + max3));
        max1 = max2 = max3 = 0 , index1 = index2 = -1;
 
 
 
        for(int i = 0 ; i < n ; i++) {
            if(b[i] > max1) {
                max1 = b[i];
                index1 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && a[i] > max2) {
                max2 = a[i];
                index2 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && i != index2 && c[i] > max3) {
                max3 = c[i];
            }
        }
        ans = max(ans , (max1 + max2 + max3));
        max1 = max2 = max3 = 0 , index1 = index2 = -1;
 
 
 
        for(int i = 0 ; i < n ; i++) {
            if(b[i] > max1) {
                max1 = b[i];
                index1 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && c[i] > max2) {
                max2 = c[i];
                index2 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && i != index2 && a[i] > max3) {
                max3 = a[i];
            }
        }
        ans = max(ans , (max1 + max2 + max3));
        max1 = max2 = max3 = 0 , index1 = index2 = -1;
 
 
 
        for(int i = 0 ; i < n ; i++) {
            if(c[i] > max1) {
                max1 = c[i];
                index1 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && a[i] > max2) {
                max2 = a[i];
                index2 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && i != index2 && b[i] > max3) {
                max3 = b[i];
            }
        }
        ans = max(ans , (max1 + max2 + max3));
        max1 = max2 = max3 = 0 , index1 = index2 = -1;
 
 
 
        for(int i = 0 ; i < n ; i++) {
            if(c[i] > max1) {
                max1 = c[i];
                index1 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && b[i] > max2) {
                max2 = b[i];
                index2 = i;
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(i != index1 && i != index2 && a[i] > max3) {
                max3 = a[i];
            }
        }
        ans = max(ans , (max1 + max2 + max3));
        max1 = max2 = max3 = 0 , index1 = index2 = -1;
 
 
        
        cout << ans << endl;
 
    }
 
    return 0;
}