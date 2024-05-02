// Problem link :- [https://codeforces.com/contest/1941/problem/C]

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int ans = 0;
    while(i < n)
    {
      /* cout<<i<<" "; */
      if(s[i] == 'm')
      {
        if(i+5 <= n and s[i+1] == 'a' and s[i+2] == 'p' and s[i+3] == 'i' and s[i+4] == 'e')
        {
          ans++;
          i+=5;
        }
        else if(i+3<=n and s[i+1] == 'a' and s[i+2] == 'p'){
          ans++;
          i+=3;
        }
        else{
          i++;
        }
      }
      else if(s[i] == 'p')
      {
        if(i+3 <= n and s[i+1] == 'i' and s[i+2] == 'e')
        {
          ans++;
          i+=3;
        }
        else{
          i++;
        }
      }
      else{
        i++;
      }
    }
    /* cout<<"\n"; */
    cout<<ans<<endl;
  }
}