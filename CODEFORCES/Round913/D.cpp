/* https://codeforces.com/contest/1907/problem/D */


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
typedef vector<int> vi;
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
void solve() {
    int n;
    cin >> n;
    int m = 0;
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.pb({a,b});
        m = max(m,b);
    }
    int l = 0;
    int r = 1e9;
    auto check = [&](int x) -> bool
    {
        int lcc = 0;
        int rcc = 0;
        for(int i=0;i<v.size();i++)
        {
            auto [lc, rc] = v[i];
            // cout<<lc<<" "<<rc<<endl;
            lcc -= x;
            rcc += x;
            if(lc > rcc or rc < lcc)
            {
                return false;
            }
            lcc = max(lcc, lc);
            rcc = min(rcc,rc);
        }
        return true;
    };

    while(l<r)
    {
        int mid = l + (r-l)/2;
        if(check(mid) == false){
            l = mid+1;
        }else{
            r = mid;
        }
    }
    cout<<l<<endl;
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
