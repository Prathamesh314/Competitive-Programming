// Problem link :- [https://codeforces.com/contest/1950/problem/D]

#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
  int n;
        cin >> n;
        string s = to_string(n);
        int ones = count(s.begin(), s.end(), '1');
        int zeros = count(s.begin(), s.end(), '0');
        if (ones + zeros == s.length()) {
            cout << "YES" << endl;
            return;
        }
        int ff = 0;
        while (n > 1) {
            vector<int> v;
            for (int i = 1; i * i <= n; i++) {
                if (n % i == 0) {
                    v.push_back(i);
                    if (n / i != i) {
                        v.push_back(n / i);
                    }
                }
            }

            sort(v.begin(), v.end());
            v.erase(v.begin());
            reverse(v.begin(), v.end());
            int flag = 0;
            for (int i = 0; i < v.size(); i++) {
                string s = to_string(v[i]);
                if (count(s.begin(), s.end(), '1') + count(s.begin(), s.end(), '0') == s.length()) {
                    n = n / v[i];
                    flag = 1;
                    break;
                }
            }
            if (!flag) {
                cout<<"NO"<<endl; return;            }
        }
        cout<<"YES"<<endl;

}

signed main() {
    int t;
    cin >> t;
    while (t--) {
      solve();
            }
    return 0;
}