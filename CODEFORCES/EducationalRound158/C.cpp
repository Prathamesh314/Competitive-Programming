// problem link :- https://codeforces.com/contest/1901/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define newline cout<<endl;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
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
void solve() {
    int n;
    cin>>n;
    vi v(n,0);
    for(auto &it: v)
    {
        cin>>it;
    }

    if(n==1)
    {
        cout<<0<<endl;
        return;
    }

    int mini = *min_element(all(v));
    int maxi = *max_element(all(v));
    vi sol;
    while(mini != maxi)
    {
        sol.pb(mini % 2);
        mini = (int)floor((mini + sol.back())/2);
        maxi = (int)floor((maxi+sol.back())/2);
        if(mini == maxi){
            break;
        }
    }
    cout<<(sol.size())<<endl;
    if(sol.size() <= n)
    {
        for(auto it: sol)
        {
            cout<<it<<" ";
        }
        newline;
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
