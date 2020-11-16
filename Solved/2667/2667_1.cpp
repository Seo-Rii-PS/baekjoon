//2020 SEORII®. All right reserved.
//Code created on 2020-11-16

#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> v;
vector<int> ans;
int n;

void dfs(int x, int y) {
    pair<int, int> dir[] = {{1,  0},
                            {-1, 0},
                            {0,  1},
                            {0,  -1}};
    ++ans.back();
    for (auto &i:dir) {
        int nx = x + i.first, ny = y + i.second;
        if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
        if (v[nx][ny] == '0') continue;
        v[nx][ny] = '0';
        dfs(nx, ny);
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n;
    v.resize(n);
    for (auto &i:v) {
        i.resize(n);
        for (auto &j:i) {
            cin >> j;
        }
    }
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            if (v[i][j] == '1') {
                v[i][j] = '0';
                ans.push_back(0);
                dfs(i, j);
            }
        }
    cout << ans.size() << '\n';
    sort(ans.begin(), ans.end());
    for (auto &i:ans) cout << i << '\n';
}