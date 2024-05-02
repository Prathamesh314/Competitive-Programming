/* https://codeforces.com/contest/1915/problem/B */


// ----------------- असली माल void solve() में है | -----------------
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define yes cout<<'YES'<<endl;
#define no cout<<'NO'<<endl;
#define fr(it,a) for(auto &it:a)
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
const int INF = LLONG_MAX;
const int MOD = 1e9 + 7;
#define DEBUG 1
#if DEBUG
#define debug(x) cerr << #x << ' = ' << x << endl;
#else
#define debug(x)
#endif
#define int long long
template <typename T>
void print(const T &x) {
    for (const auto &val : x) {
        cout << val << ' ';
    }
    cout << endl;
}
void dijkstra(int src, int V, vector<vector<int>> adj[])
{
    vector<int> dist(V,1e9);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0,src});
    dist[src] = 0;
    while(! pq.empty())
    {
        int d = pq.top().first;
        int node = pq.top().second;
        for(auto it: adj[node])
        {
            int adjnode = it[0];
            int newd = it[1];
            if(newd + d < dist[adjnode])
            {
                dist[adjnode] = newd+d;
                pq.push({d+newd, adjnode});
            }
        }
    }
    print(dist);
}
// ----------------- रहा नहीं जाता तड़प ही ऐसी है | -----------------
void solve() {
    string a,b,c;
    cin>>a>>b>>c;
    vector<string> s = {a,b,c};
    for(int i=0;i<3;i++)
    {
        string k = s[i];
        vector<int> vk(3,0);
        for(int j=0;j<3;j++)
        {
            if(k[j] == '?')
            {
                if(j == 0){
                    vk[k[j+1]-'A']++;
                    vk[k[j+2]-'A']++;
                }
                else if(j == 2)
                {
                    vk[k[0]-'A']++;
                    vk[k[1]-'A']++;
                }
                else{
                    vk[k[0]-'A']++;
                    vk[k[2]-'A']++;
                }
                for(int k=0;k<3;k++)

                {
                    if(vk[k] == 0){
                        if(k==0) {
                            cout<<"A"<<endl;
                            return;
                        }else if(k==1){
                            cout<<"B"<<endl;
                            return;
                        }else{
                            cout<<"C"<<endl;
                            return;
                        }
                    }
                }
            }
        }
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
