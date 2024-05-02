/* https://codeforces.com/contest/1922/problem/C */

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
    int n;
    cin>>n;
    vi a(n);
    fr(it, a)
        cin>>it;
    map<int,int> mp;
    vector<int> l(n), r(n);
    mp[0] = 1;
    mp[n-1] = -1;
    for(int i=1;i<n-1;i++)
    {
        int leftn = abs(a[i]-a[i-1]);
        int rightn = abs(a[i]-a[i+1]);
        if(leftn < rightn)
        {
            mp[i] = -1;
        }else{
            mp[i] = 1;
        }
    }
    l[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (mp[i] == -1)
            l[i] = 1 + l[i - 1];
        else
            l[i] = l[i - 1] + abs(a[i] - a[i - 1]);
    }
    r[n-1]=0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (mp[i] == 1)
        {
            r[i] = 1 + r[i + 1];
        }
        else
        {
            r[i] = r[i + 1] + abs(a[i] - a[i + 1]);
        }
    }

    int query;
    cin >> query;

    while (query--)
    {
        int x, y;
        cin>>x>>y;
        if (x == y)
        {
            cout<<0<<endl;
        }
        else
        {
            if (y>x)
            {

                cout<<r[x - 1] - r[y - 1]<<endl;
            }
            else
            {
                cout<<l[x - 1] - l[y - 1]<<endl;
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
