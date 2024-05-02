//  problem link :- https://codeforces.com/contest/1870/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int n,k;
        cin>>n>>k;
        vector<int> vis(k+1,0);
        vector<int> arr;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
            vis[a] = 1;
        }
        vector<int> prefix;
        vector<int> suffix;
        int m = 0;
        for(int i=0;i<n;i++){
            m = max(m,arr[i]);
            prefix.push_back(m);
        }
        m=0;
        for(int i=n-1;i>=0;i--){
            m = max(m,arr[i]);
            suffix.push_back(m);
        }
        for(int i=1;i<=k;i++){
            if(!vis[i]){
                cout<<"0"<<" ";
                continue;
            }

            auto it = lower_bound(prefix.begin(),prefix.end(),i);
            int n1 = it-prefix.begin();
            auto it1 = lower_bound(suffix.begin(),suffix.end(),i);
            int n2 = it1 - suffix.begin();
            n2 = n-1-n2;
            int diff = (n2-n1+1);
            int val = 2*diff;
            cout<<val<<" ";
        }
        cout<<endl;

    }
}