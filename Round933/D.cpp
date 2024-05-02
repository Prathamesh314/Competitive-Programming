// Problem link :- [https://codeforces.com/contest/1941/problem/D]

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,x;
    cin>>n>>m>>x;
    --x;
    vector<int> dp(n, 0);
    dp[x] = 1;
    for(int i=0;i<m;i++)
    {
      int r;
      string c;
      cin>>r>>c;
      vector<int> dp1(n,0);
      for(int i=0;i<n;i++)
      {
        if(!dp[i]) continue;
        if(c == "0" || c == "?")
        {
          int y = (i+r)%(n);
          dp1[y] = 1;
        }
        if(c == "1" || c == "?")
        {
          int y = (i+n-r)%n;
          /* cout<<x<<" "; */
          dp1[y] = 1;
        }
      }
      swap(dp, dp1);
    }
    /* cout<<"\n"; */
    vector<int> ans;
    for(int i=0;i<dp.size();i++)
    {
      if(dp[i])
      {
        ans.push_back(i+1);
      }
    }

    cout<<ans.size()<<endl;
    for(auto it: ans)
    {
      cout<<it<<" ";
    }
    cout<<"\n";
  }
}