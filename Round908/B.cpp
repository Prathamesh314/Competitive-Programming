// problem link :- https://codeforces.com/contest/1894/problem/B


#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    set<int> s;
    vector<int> ans(n, 1);

    map<int, int> d;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (d.find(arr[i]) == d.end()) {
            d[arr[i]] = 1;
        } else {
            s.insert(i);
        }
    }

    if (s.size() < 2) {
        cout << -1 << endl;
        return;
    }

    auto it = s.begin();
    ans[*it] = 2;
    bool flag = false;
    for (++it; it != s.end(); ++it) {
        if (arr[*s.begin()] != arr[*it]) {
            ans[*it] = 3;
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}
