// problem link :- https://codeforces.com/contest/1886/problem/A


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
        int r = n/3;
        if(n < 6 or n==9){
            cout<<"NO"<<endl;
            continue;
        }else{
            // cout<<"YES"<<endl;
            int x = 1;
            int y = 2;
            int z;
            int found = 0;
            for(;y<n;y++){
                if(y%3==0){
                    continue;
                }
                z = n-y-x;
                if(z%3==0 or z==x or z==y){
                    continue;
                }
                else{
                    found = 1;
                    break;
                }
            }
            if(found){
                cout<<"YES"<<endl;
                cout<<x<<" "<<y<<" "<<z<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}
