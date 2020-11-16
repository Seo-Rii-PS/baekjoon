//2020 SEORII®. All right reserved.
//Code created on 2020-11-16

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n);
    queue<tuple<int, int, int>> q;
    pair<int, int> dir[] = {{1,  0},
                            {-1, 0},
                            {0,  1},
                            {0,  -1}};
    for (auto &i:v) {
        i.resize(m);
        for (auto &j:i) cin >> j;
    }
    q.push(make_tuple(1, 0, 0));
    v[0][0] = '0';
    while (!q.empty()) {
        int s, x, y;
        tie(s, x, y) = q.front();
        q.pop();
        for (auto &d:dir) {
            int nx = x + d.first, ny = y + d.second;
            if (nx == n - 1 && ny == m - 1) {
                cout << s + 1 << endl;
                exit(0);
            }
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (v[nx][ny] == '0') continue;
            v[nx][ny] = '0';
            q.push(make_tuple(s + 1, nx, ny));
        }
    }
    return 0;
}