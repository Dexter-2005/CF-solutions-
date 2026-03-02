#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 676767677;


int main()
{
    int n;
    cin >> n;
    set<int> guy1, guy2;
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        guy1.insert(x);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        guy2.insert(x);
    }
    bool can = true;
    int total = guy1.size() + guy2.size();
    set<int> combined;
    for (auto it : guy1)
    {
        combined.insert(it);
    }
    for (auto it : guy2)
    {
        combined.insert(it);
    }
    if (combined.size() < n)
        can = false;
    if (can)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;




    
    
    
    return 0;
}