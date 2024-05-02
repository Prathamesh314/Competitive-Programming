// Problem link :- [https://codeforces.com/contest/1948/problem/A]


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        string s = "";
        char current_char = 'A';
        for (int j = 0; j < n; j += 2)
        {
            s += current_char;
            s += current_char;
            current_char++;
        }

        cout << "YES" << endl;
        cout << s << endl;
    }
    return 0;
}
