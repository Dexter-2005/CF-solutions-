#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 676767677;

int main()
{   //orderd map maintain the keys in sorted order
    //time complexity for insertion , deletion , search is O(log n)
    map<int , int > mp;
    mp[1]=102;
    mp[5]=100;
    mp[4]=102;
    mp[3]=101;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    unordered_map<int , int > ump;
    ump[1]=102;
    ump[5]=100;
    ump[4]=102;
    ump[3]=101;
    cout << "UNORDERED MAP CONTENTS: " << endl;
    for (auto it : ump) 
    {
        cout << it.first << " " << it.second << endl;
    }   
    // note : order is not maintained in unordered map
    // average time complexity for insertion , deletion , search is O(1) in unordered map 


}
