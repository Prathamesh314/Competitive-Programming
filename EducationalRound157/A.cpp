// problem link :- https://codeforces.com/contest/1895/problem/A


#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;

        int ans = 0;
        if(y<=x)
        {
            cout<<x<<endl;
            continue;
        }
        ans = y+ max(0ll,y-x-k);
        cout<<ans<<endl;
    }
}
