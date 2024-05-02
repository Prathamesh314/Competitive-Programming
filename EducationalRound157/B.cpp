// problem link :- https://codeforces.com/contest/1895/problem/B


#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(2*n,0);
        for(auto &it:v)
        {
            cin>>it;
        }

        vector<int> big;
        vector<int> small;
        sort(v.begin(),v.end(),greater<int>());

        for(int i=0;i<n;i++)
        {
            big.push_back(v[i]);
        }

        for(int i=n;i<2*n;i++)
        {
            small.push_back(v[i]);
        }

        // sort(big.begin(),big.end(),greater<int>());
        vector<pair<int,int>> p;

        for(int i=0;i<n;i++)
        {
            int a = small[i];
            int b = big[i];
            p.push_back({b,a});
        }

        int ans = 0;
        for(int i=1;i<n;i++)
        {
            ans+=abs(p[i-1].first-p[i].first)+abs(p[i-1].second-p[i].second);
        }
        cout<<ans<<endl;
        for(auto it:p)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
}
