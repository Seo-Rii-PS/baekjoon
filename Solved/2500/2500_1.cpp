//2021 SEORII®. All right reserved.
//Code created on 2022-01-13

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;

vvi table;

vi mult(vi &a, vi &b) {
    vi nv = vi(1005);
    for (int i = 0; i <= 1000; i++)
        for (int j = 0; j <= 1000; j++) {
            if (i + j <= 1000) {
                nv[i + j] += a[i] * b[j];
                nv[i + j] %= 42043;
            }
        }
    return nv;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, k, t, x, s = 0;
    cin >> n >> k >> t;
    table.push_back(vi(1005, 0));
    for (int i = 0; i < t; ++i) {
        cin >> x;
        if (x <= 1000) ++table[0][x];
    }
    for (int i = 0; i < 20; ++i) table.push_back(mult(table.back(), table.back()));
    vi ans = vi(1005, 0);
    ans[0] = 1;
    for (int i = 0; i < 20; ++i) {
        if ((1 << i) & n) {
            ans = mult(ans, table[i]);
        }
    }
    for (int i = 0; i <= k; ++i) s = (s + ans[i]) % 42043;
    cout << s << endl;
    return 0;
}