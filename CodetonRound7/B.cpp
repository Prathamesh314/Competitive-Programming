// https://codeforces.com/contest/1896/problem/B

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
        string s;
        cin>>s;
        int ans = 0;
        int count = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='B'){
                count+=1;
            }else if(count !=0)
            {
                ans+=count;
                s[i]='B';
                count=0;
                i++;
            }else{
                ans+=count;
            }
        }
        // int ans = 
        cout<<ans<<endl;
    }
}
