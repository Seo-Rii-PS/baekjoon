//2021 SEORII®. All right reserved.
//Code created on 2022-01-11

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;

int check(vvi &map, int h, int inv) {
    int ti = 0;
    for (auto &v: map) {
        for (auto &i: v) {
            inv += i - h;
            if (h - i > 0) ti += h - i;
            else ti += (i - h) * 2;
        }
    }
    if (inv < 0) return INT_MAX;
    return ti;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m, inv, mi = INT_MAX, mii = -1;
    cin >> n >> m >> inv;
    vvi map(n, vi(m));
    for (auto &v: map) for (auto &i: v) cin >> i;
    for (int i = 0; i <= 256; ++i) {
        int ti = check(map, i, inv);
        if (ti <= mi) {
            mi = ti;
            mii = i;
        }
    }
    cout << mi << ' ' << mii << endl;
    return 0;
}