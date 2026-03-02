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
        string s;
        cin >> s;
        
        int temp=0;
       for(int i=0;i<s.size()-1;i++){
           if(s[i]=='Y' && s[i+1]=='Y'){
               temp++;
               break;
           }
       }
         if(temp==0){
              cout<<"YES\n";
         }
         else{
              cout<<"NO\n";
         }

    }
    return 0;
}