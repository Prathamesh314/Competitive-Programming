/* https://codeforces.com/contest/1907/problem/A */

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
    string s;
    cin>>s;
    char ch = s[0];
    int i = s[1] - '0';
    // moving right
    for(char c = ch+1;c<='h';c++)
    {
        cout<<c<<i<<endl;
    }
    // moving left
    for(char c=ch-1;c>='a';c--)
    {
        cout<<c<<i<<endl;
    }
    // moving down
    for(int j=i+1;j<=8;j++)
    {
        cout<<ch<<(j)<<endl;
    }

    // moving up
    for(int j=i-1;j>=1;j--)
    {
        cout<<ch<<(j)<<endl;
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
