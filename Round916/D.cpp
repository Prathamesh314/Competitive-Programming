/* https://codeforces.com/contest/1914/problem/D */

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

void helper(int n, vector<pair<int, int>>& arr1, vector<pair<int, int>>& arr2, vector<pair<int, int>>& arr3) {
    sort(arr1.begin(), arr1.end(), greater<pair<int, int>>());
    sort(arr2.begin(), arr2.end(), greater<pair<int, int>>());
    sort(arr3.begin(), arr3.end(), greater<pair<int, int>>());

    int result = 0;
    for (int x = 0; x < 3; ++x) {
        for (int y = 0; y < 3; ++y) {
            for (int z = 0; z < 3; ++z) {
                if (arr1[x].second != arr2[y].second && arr1[x].second != arr3[z].second && arr2[y].second != arr3[z].second) {
                    result = max(result, arr1[x].first + arr2[y].first + arr3[z].first);
                }
            }
        }
    }
    cout << result << endl;
}

void solve() {
    int size;
    cin >> size;

    vector<pair<int, int>> a1(size);
    vector<pair<int, int>> a2(size);
    vector<pair<int, int>> a3(size);

    for (int i = 0; i < size; ++i) {
        cin >> a1[i].first;
        a1[i].second = i + 1;
    }

    for (int i = 0; i < size; ++i) {
        cin >> a2[i].first;
        a2[i].second = i + 1;
    }

    for (int i = 0; i < size; ++i) {
        cin >> a3[i].first;
        a3[i].second = i + 1;
    }

    helper(size, a1, a2, a3);
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
