//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

vector<int> pa, h;
vector<vector<int>> v;
int n, m;

int geth(int p) {
    if (!pa[p]) {
        h[p] = 1;
        return 1;
    }
    if (!h[p]) h[p] = geth(pa[p]) + 1;
    return h[p];
}

int query(int a, int b) {
    if (h[a] < h[b]) swap(a, b);
    if (h[a] > h[b]) {
        int d = h[a] - h[b];
        for (int i = 0;; ++i) {
            if (!d) break;
            if (d & (1 << i)) {
                a = v[a][i];
                d -= (1 << i);
            }
        }
    }
    while (a != b) {
        int i;
        for (i = 0;; ++i) if (v[a][i] == v[b][i]) break;
        if (i == 0) return pa[a];
        a = v[a][i - 1];
        b = v[b][i - 1];
    }
    return a;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n;
    pa.resize(n + 1);
    h.resize(n + 1);
    v.resize(n + 1);
    int a, b;
    for (int i = 1; i < n; ++i) {
        cin >> a >> b;
        pa[b] = a;
    }
    for (int i = 1; i <= n; ++i) geth(i);
    for (int i = 1; i <= n; ++i) v[i].push_back(pa[i]);
    int n2 = 0, t = 1;
    while (n2 < n) {
        ++n2;
        t <<= 1;
    }
    for (int i = 1; i < n2; ++i) {
        v[0].push_back(0);
        for (int j = 1; j <= n; ++j) {
            v[j].push_back(v[v[j][i - 1]][i - 1]);
        }
    }
    cin >> m;
    while (m--) {
        cin >> a >> b;
        cout << query(a, b) << '\n';
    }
    return 0;
}