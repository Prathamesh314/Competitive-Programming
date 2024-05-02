// problem link :- https://codeforces.com/contest/1873/problem/F


#include<bits/stdc++.h>
using namespace std;

const int N = 200000;
int n,k;

int a[N+5], h[N+5], pref[N+5], length[N+5];

bool get(int dist)
{
    bool found = false;
    for(int i=0;i<n;i++){
        if(length[i] < dist) continue;
        int sum = pref[i+dist] - pref[i];
        if(sum <= k)
        {
            found = true;
            break;
        }
    }
    return found;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        pref[0] = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            pref[i+1] = pref[i] + a[i];
        }

        for(int i=0;i<n;i++){
            cin>>h[i];
        }

        length[n-1] = 1;
        for(int i = n-2;i>=0;i--){
            if(h[i]%h[i+1]==0){
                length[i] = length[i+1]+1;
            }else{
                length[i] = 1;
            }
        }
        int l=1, r=N;

        while(l<=r)
        {
            int m = l + (r-l)/2;
            if(get(m)){
                l = m+1;
            }else{
                r = m-1;
            }
        }
        cout<<r<<endl;
    }
}