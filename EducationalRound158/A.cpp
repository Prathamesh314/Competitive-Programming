// problem link :- https://codeforces.com/contest/1901/problem/A


#include<bits/stdc++.h>
#define fr(i,start,end) for(int i=(start);i<(end);i++)
#define vi vector<int>
#define vll vector<long long>
#define int long long
#define newline cout<<endl
#define pb push_back()
int i,j;
using namespace std;

bool check(vector<int> v, int mid){
    for(int i=1;i<v.size();i++)
    {
        mid -= (v[i]-v[i-1]);
    }
    return mid>=0;
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        vector<int> v(n,0);
        for(auto &it:v)
        {
            cin>>it;
        }
        int ans = v[0];
        for(int i=1;i<n;i++){
            if(v[i] > x)
            {
                ans = max(ans, 2*(x-v[i-1]));
                break;
            }
            ans = max(ans, v[i]-v[i-1]);
        }
        if(v[n-1] < x)
        {
            ans = max(ans, 2*(x-v[n-1]));
        }
        cout<<ans<<endl;

    }
}
