//2020 SEORII®. All right reserved.
//Code created on 2020-11-16

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m, ma = 0;
    cin >> n >> m;
    vector<vector<char>> v(n);
    for (int i = 0; i < n; ++i) {
        v[i].resize(m);
        for (int j = 0; j < m; ++j) cin >> v[i][j];
    }
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            for (int s = 1;; ++s) {
                if (i + s == n || j + s == m) break;
                if (v[i][j] == v[i][j + s] && v[i][j] == v[i + s][j] && v[i][j] == v[i + s][j + s]) ma = max(ma, s);
            }

    cout << (ma + 1) * (ma + 1) << endl;
    return 0;
}