// Problem link :- [https://codeforces.com/contest/1946/problem/C]

#include<bits/stdc++.h>
using namespace std;

int dfs(int start, int parent, vector<vector<int>>& adj, int& comps, int mid)
{
  int size = 1;
  for(auto it: adj[start])
  {
    if(it != parent)
    {
      size += dfs(it, start, adj, comps, mid);
    }
  }

  if(size >= mid)
  {
    comps += 1;
    return 0;
  }
  return size;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    vector<vector<int>> adj(n);
    for(int i=0;i<n-1;i++)
    {
      int u,v;
      cin>>u>>v;
      u--; v--;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    int l=1, r=n;
    while(r-l>1)
    {
      int mid = l + (r-l)/2;
      int comps = 0;
      dfs(0, -1, adj, comps, mid);
      if(comps >= k+1)
      {
        l = mid;
      }
      else{
        r = mid;
      }
    }
    cout<<l<<endl;
  }
}