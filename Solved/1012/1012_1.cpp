//2020 SEORII®. All right reserved.
//Code created on 2021-07-21

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

vector<vector<bool>> v;
int n, m, xx[] = {1, -1, 0, 0}, yy[] = {0, 0, -1, 1};

void dfs(int i, int j) {
    v[i][j] = false;
    for (int k = 0; k < 4; ++k) {
        if (i + xx[k] >= 0 && j + yy[k] >= 0 && i + xx[k] < n && j + yy[k] < m && v[i + xx[k]][j + yy[k]])
            dfs(i + xx[k], j + yy[k]);
    }
}

void proc() {
    int k, cnt = 0;
    cin >> n >> m >> k;
    v = vector<vector<bool>>(n + 1, vector<bool>(m + 1));
    for (int i = 0; i < k; ++i) {
        int a, b;
        cin >> a >> b;
        v[a][b] = true;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (v[i][j]) {
                dfs(i, j);
                ++cnt;
            }
        }
    }
    cout << cnt << '\n';
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) proc();
    return 0;
}