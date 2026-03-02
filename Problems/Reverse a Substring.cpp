#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ll t;
    // cin >> t;

    // while (t--)
    // {
        int n;
        cin >> n;
        string s;
        cin >> s;
        // vector<int> idx();
        string temp=s;
        sort(temp.begin(),temp.end());
        if(s==temp){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
            for(int i=0;i<n-1;i++){
                    if(s[i]>s[i+1]){
                        cout<<i+1<<" "<<i+2<<"\n";
                        return 0;
                    }
                
            }
        

            

        }
    
       
    

    return 0;
}
