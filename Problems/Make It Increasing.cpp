#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int count =0;
        int flag=0;
        for(int i=0;i<n-2;i++){
            if(a[i]>a[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<0<<endl;
            continue;
        }
        for(int i=n-1;i>0;i--){
            if(a[i]<a[i-1]){
                while(a[i]>a[i-1]){
                    a[i]=a[i]/2;
                    count++;
                }
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}