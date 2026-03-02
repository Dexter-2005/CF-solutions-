#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
       
        int ans=0,curr=0;
        int sublength=0;
         int i=0;
        while(i<n){
            if(a[i]<=q)
               {
                while(i<n && a[i]<=q)
                {
                    sublength++;
                    i++;
                }
                if(sublength>=k)
                {
                    int x=sublength-k+1;
                    ans+= (x*(x+1))/2;
                }
                sublength=0;
               }
            else
                i++;
        }
        cout<<ans<<"\n";
       
    }

    return 0;
}