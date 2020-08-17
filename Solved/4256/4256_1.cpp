//2020 SEORII®. All right reserved.
//Code created on 8/17/2020

#include <bits/stdc++.h>

using namespace std;

vector<int> a, b, c;

void dfs(int p, int l, int r) {
    if (l > r) return;
    if (l != r) {
        dfs(p + 1, l, b[a[p]] - 1);
        dfs(p + b[a[p]] - l + 1, b[a[p]] + 1, r);
    }
    c.push_back(a[p]);
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, t, tc;
    cin >> tc;
    while (tc--) {
        cin >> n;
        a.clear();
        b.clear();
        c.clear();
        a.resize(n + 1);
        b.resize(n + 1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n; ++i) {
            cin >> t;
            b[t] = i;
        }
        dfs(1, 1, n);
        for (auto &i:c) cout << i << ' ';
        cout << endl;
    }
    return 0;
}