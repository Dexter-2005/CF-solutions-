#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;
        long long sum1=0;
        long long sum2=0;
        long long total=0;
        sum1=k*(k+1)/2;
        total=n*(n+1)/2;
        sum2=total-(n-k)*(n-k+1)/2;
        if(x<=sum2 && x>=sum1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

       
    }

    return 0;
}

