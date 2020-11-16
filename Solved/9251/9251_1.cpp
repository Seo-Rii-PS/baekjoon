//2020 SEORII®. All right reserved.
//Code created on 2020-11-17

#include <bits/stdc++.h>

using namespace std;
string a, b;
vector<vector<int>> v;

int g(int x, int y) {
    if (x < 0 || y < 0) return 0;
    return v[x][y];
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    v.resize(a.length(), vector<int>(b.length()));
    for (int i = 0; i < a.length(); ++i)
        for (int j = 0; j < b.length(); ++j) {
            v[i][j] = max(g(i - 1, j), g(i, j - 1));
            if (a[i] == b[j]) v[i][j] = max(v[i][j], g(i - 1, j - 1) + 1);
        }
    cout << v[a.length() - 1][b.length() - 1];
    return 0;
}