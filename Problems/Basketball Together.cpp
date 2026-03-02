#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 676767677;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll maxi=*max_element(arr.begin(),arr.end());
    if(maxi*n<=target){
        cout<<0<<"\n";
        return 0;
    }
    
    sort(arr.begin(), arr.end());
    int ans1=0;
    for(int i=0;i<n;i++){
        if(arr[i]>target){
            ans1++;
        }
    }
    n=n-ans1;
    sort(arr.begin(),arr.begin()+n,greater<int>());
    int ans2=0;
    int i=0;
    int j=1;
   int temp=1;
    while(temp<n){
        while(j*arr[i]<=target && j<n){
            j++;
        }
        temp=temp+j+i;
        i=i+1;
        j=1;
        ans2++;
    }   

    
    
    cout<<ans2+ans1<<"\n";
    return 0;   

}
