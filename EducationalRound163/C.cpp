// Problem link :- [https://codeforces.com/contest/1948/problem/A]

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> s(2);
    cin >> s[0] >> s[1];
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    queue<pair<int, int>> q;
    q.push({0, 0});
    vector<vector<int>> vis(2, vector<int>(n, 0));
    vis[0][0] = 1;

    while (!q.empty()) {
        pair<int, int> t = q.front();
        q.pop();
        if (t.first ==1 and t.second == n - 1) { 
            cout << "YES" << endl;
            return;
        }

        for (int i = 0; i < 4; i++) {
            int nx = t.first + dx[i];
            int ny = t.second + dy[i];
            if (nx >= 0 && nx < 2 && ny >= 0 && ny < n) {
                if (s[nx][ny] == '<') {
                    ny -= 1;
                } else if (s[nx][ny] == '>') {
                    ny += 1;
                }

                if (vis[nx][ny] == 1) {
                    continue;
                }

                vis[nx][ny] = 1;
                q.push({nx, ny});
            }
        }
    }
    cout << "NO" << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}