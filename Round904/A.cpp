// problemm link :- https://codeforces.com/contest/1884/problem/A

#include<bits/stdc++.h>
using namespace std;
int findsum(int n){
    int ans = 0;
    while(n){
        int r = n%10;
        ans += r;
        n = n/10;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j;
        cin>>i>>j;
        int ans = -1;
        while(1){
            int s = findsum(i);
            if(s%j==0){
                ans = i;
                break;
            }
            i+=1;
        }
        cout<<ans<<endl;
    }
}
