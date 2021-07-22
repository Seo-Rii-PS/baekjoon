//2021 SEORII®. All right reserved.
//Code created on 2021-07-23

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1), s(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        s[i] = v[i] + s[i - 1];
    }
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        cout << s[b] - s[a - 1] << '\n';
    }
    return 0;
}