//2020 SEORII®. All right reserved.
//Code created on 2021-07-22

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m, mi = INT_MAX;
    cin >> n >> m;
    vector<vector<bool>> ch(n, vector<bool>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char t;
            cin >> t;
            if (t == 'W') ch[i][j] = true;
            else if (t != 'B') --j;
        }
    }
    for (int i = 0; i < n - 7; ++i) {
        for (int j = 0; j < m - 7; ++j) {
            int cn = 0;
            for (int k = i; k < i + 8; ++k) {
                for (int l = j; l < j + 8; ++l) {
                    if (ch[k][l] ^ ((k + l) & 1)) ++cn;
                }
            }
            if (cn > 32) cn = 64 - cn;
            mi = min(mi, cn);
        }
    }
    cout << mi << endl;
    return 0;
}