#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 676767677;



int main()
{    // set have logrithmic time complexity for insertion , deletion , search
     // multiset allow duplicate elements where as set does not allow duplicate elements
    set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(2);
    for (auto it : s)
    {
        cout << it << " ";

    }
    cout << "FREQ OF 4 IS(set) :" << s.count(4) << endl;

    multiset<int> ms;
    ms.insert(3); 
    ms.insert(1);
    ms.insert(4);
    ms.insert(4);
    ms.insert(4);
    ms.insert(2);
    cout << "FREQ OF 4 IS(multiset) :" << ms.count(4) << endl;
    for (auto it : ms)
    {
        cout << it << " ";

    }

    unordered_set<int> us;
    us.insert(3);
    us.insert(1);
    us.insert(4);
    us.insert(4);
    us.insert(2);
    cout << "\nUNORDERED SET CONTENTS: " << endl;
    for (auto it : us)
    {
        cout << it << " ";

    }
    // note : order is not maintained in unordered set
    // average time complexity for insertion , deletion , search is O(1) in unordered set
    return 0;

      


}
