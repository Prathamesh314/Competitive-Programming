 /* https://codeforces.com/contest/1926/problem/D */


// ----------------- असली माल void solve() में है | -----------------
#include <bits/stdc++.h>
using namespace std;
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

int find_compl(int num)
{
    int comp = 0;
    for(int i=31;i>=0;i--)
    {
        int mask = 1<<i;
        if(num & 1)
        {
            comp |= 0;
        }else{
            comp |= (1<<i);
        }
    }

    return comp;
}

void solve() {
    int n;
    cin>>n;
    vi a(n,0);
    fr(it, a)
        cin>>it;
    
    map<int,int> mp;
    int val = (1<<31)-1;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(mp.find(a[i]) == mp.end())
        {
            mp[a[i]] = 0;
        }

        if(mp.find(val-a[i]) == mp.end())
        {
            mp[val-a[i]] = 0;
        }

        if(mp[val-a[i]] >0)
        {
            mp[val-a[i]]--;
        }
        else{
            ans += 1;
            mp[a[i]]++;
        }
    }

    cout<<ans<<endl;
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

