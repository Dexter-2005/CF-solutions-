#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 676767677;



int main()
{  
   vector<int> v1={1,2,3,4,5,6,7,8};
   vector<int> v2(v1);
   for( auto x:v2){
       cout<<x<<" ";
   }
    cout<<endl;
   v2.erase(v2.begin()+1,v2.begin()+4);
   for( auto x:v2){
       cout<<x<<" ";
   }
   
    



}
