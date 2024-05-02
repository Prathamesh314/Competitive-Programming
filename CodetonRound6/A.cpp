// problem link :- https://codeforces.com/contest/1870/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int n,k,x;
        cin>>n>>k>>x;
        int ans = 0;
        if(k > n || k > x + 1){
            cout<< -1 <<endl;
        }
        else{
            int end = k<n?k:n;
            int ans = 0;
            for(int i=0;i<end;i++){
                ans += i;
            }
            int rem = n-end;
            if(k==x){
                for(int i=0;i<rem;i++){
                    ans += x-1;
                }
            }else{
                for(int i=0;i<rem;i++){
                    ans += x;
                }
            }
            cout<<ans<<endl;
        }
        

    }
}