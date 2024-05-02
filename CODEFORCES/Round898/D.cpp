//problem link :- https://codeforces.com/contest/1873/problem/D

#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0;
        int ans=0;
        while(i<n){
            for(;i<n;i++){
                if(s[i]=='B'){
                    break;
                }
            }
            if(i>=n){
                break;
            }
            ans+=1;
            i+=k;
        }
        cout<<ans<<endl;
    }
}