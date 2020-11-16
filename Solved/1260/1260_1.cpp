//2020 SEORII®. All right reserved.
//Code created on 2020-11-16

#include <bits/stdc++.h>

using namespace std;

vector<bool> vi;
vector<vector<int>> li;
vector<int> dli, bli;

void dfs(int p) {
    vi[p] = true;
    dli.push_back(p);
    for (auto &i:li[p]) {
        if (!vi[i]) dfs(i);
    }
}

void bfs(int p) {
    queue<int> qu;
    vi[p] = true;
    qu.push(p);
    while (!qu.empty()) {
        int np = qu.front();
        bli.push_back(np);
        qu.pop();
        for (auto &i:li[np]) {
            if (!vi[i]) qu.push(i);
            vi[i] = true;
        }
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m, v, a, b;
    cin >> n >> m >> v;
    li.resize(n + 1);
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        li[a].push_back(b);
        li[b].push_back(a);
    }

    for (int i = 1; i <= n; ++i) sort(li[i].begin(), li[i].end());

    vi = vector<bool>(n + 1);
    dfs(v);
    vi = vector<bool>(n + 1);
    bfs(v);

    for (auto &i:dli)cout << i << ' ';
    cout << '\n';
    for (auto &i:bli)cout << i << ' ';
    cout << '\n';
    return 0;
}