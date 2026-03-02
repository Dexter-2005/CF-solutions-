#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int flag = 0;
        for (int i = 0; i < n-1; i++){
            if(v[i]==v[i+1]){
                flag=1;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";


    }

    return 0;
}