#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 676767677;



int main()
{
    int n;
    cin >> n;
    pair<int , int > p={1,2};
    cout << p.first << " " << p.second << endl;
    pair <int , pair<int , int > > q={1,{2,3}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;
    pair< int ,int >arr[]={{1,2},{3,4},{5,6}};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

}
