/* https://codeforces.com/contest/1896/problem/A */

#include<bits/stdc++.h>
#define fr(i,start,end) for(int i=(start);i<(end);i++)
#define vi vector<int>
#define vll vector<long long>
#define int long long
#define newline cout<<endl
#define pb push_back()
int i,j;
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(auto &it:v)
        {
            cin>>it;
        }

        if(v[0] == *min_element(v.begin(),v.end())){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
