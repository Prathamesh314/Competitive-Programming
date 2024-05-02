/* https://codeforces.com/contest/1927/problem/C */

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
    int n,m,k;
    cin>>n>>m>>k;
    vi a(n), b(m);
    fr(it, a)
        cin>>it;
    
    fr(it, b)
        cin>>it;
    
    sort(all(a));
    sort(all(b));
    set<int> aa,ab,ac;
    for(auto it:a)
    {
        if(it <= k)
        {
            aa.insert(it);
        }
    }

    for(auto it: b)
    {
        if(it<= k)
        {
            ab.insert(it);
        }

    }

    if(aa.size() < k/2 or ab.size() < k/2)
    {
        cout<<"NO"<<endl;
        return;
    }

    set<int> kkk;
    for(auto it: aa)
        kkk.insert(it);
    
    for(auto it: ab)
        kkk.insert(it);
    
    for(int i=1;i<=k;i++)
    {
        if(kkk.find(i) == kkk.end())
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
    
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
