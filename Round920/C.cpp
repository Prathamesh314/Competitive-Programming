/* https://codeforces.com/contest/1921/problem/C */

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
    int n,f,a,b;
    cin>>n>>f>>a>>b;
    vi arr(n);
    for(auto& it: arr)
        cin>>it;

    int prev = 0;

    for(int i=0;i<n;i++)
    {
        int cnt = (abs(prev-arr[i]))*a;
        f -= min(cnt,b);
        prev = arr[i];
    }

    if(f>0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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

