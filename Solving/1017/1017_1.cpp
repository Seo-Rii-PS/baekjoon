//2021 SEORII®. All right reserved.
//Code created on 2022-01-13

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int n;
set<int> s;
vector<int> v, u;
vector<bool> npr(2005);

void dfs(int l) {
    if (l == n) {
        s.insert(v[u[0]]);
        return;
    }
    if (u[l] != -1) {
        dfs(l + 1);
        return;
    }
    for (int i = l + 1; i < n; i++) {
        if (!npr[v[i] + v[l]] && u[i] == -1) {
            u[i] = l;
            u[l] = i;
            dfs(l + 1);
            u[i] = u[l] = -1;
        }
    }

}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n;
    v.resize(n);
    u.resize(n, -1);
    for (auto &i: v) cin >> i;
    npr[0] = npr[1] = true;
    for (int i = 2; i <= 2000; ++i) {
        if (!npr[i]) {
            for (int j = i * i; j <= 2000; j += i) {
                npr[j] = true;
            }
        }
    }
    dfs(0);
    for (auto &i: s) cout << i << " ";
    if (s.empty()) cout << "-1";
    return 0;
}