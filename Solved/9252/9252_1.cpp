//2020 SEORII®. All right reserved.
//Code created on 2020-11-17

#include <bits/stdc++.h>

using namespace std;
string a, b;
vector<vector<tuple<int, int, int>>> v;

int g(int x, int y) {
    if (x < 0 || y < 0) return 0;
    return get<0>(v[x][y]);
}

void dfs(int x, int y) {
    if (x < 0 || y < 0) return;
    dfs(get<1>(v[x][y]), get<2>(v[x][y]));
    if (get<1>(v[x][y]) == x - 1 && get<2>(v[x][y]) == y - 1) cout << a[x];
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    v.resize(a.length(), vector<tuple<int, int, int>>(b.length()));
    for (int i = 0; i < a.length(); ++i)
        for (int j = 0; j < b.length(); ++j) {
            if (g(i - 1, j) > g(i, j - 1))v[i][j] = make_tuple(g(i - 1, j), i - 1, j);
            else v[i][j] = make_tuple(g(i, j - 1), i, j - 1);
            if (a[i] == b[j] && get<0>(v[i][j]) < g(i - 1, j - 1) + 1)
                v[i][j] = make_tuple(g(i - 1, j - 1) + 1, i - 1, j - 1);
        }
    cout << get<0>(v[a.length() - 1][b.length() - 1]) << endl;
    dfs(a.length() - 1, b.length() - 1);
    return 0;
}