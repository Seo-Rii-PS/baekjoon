//2021 SEORII®. All right reserved.
//Code created on 2021-07-22

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int n, m, k, n2 = 1;
vector<ll> tr, lz;

void dlz(int p, int si) {
    if (lz[p]) {
        tr[p] += lz[p] * si;
        if (p < n2) {
            lz[p * 2] += lz[p];
            lz[p * 2 + 1] += lz[p];
        }
        lz[p] = 0;
    }
}

void upd(int p, int ts, int tf, int s, int f, ll val) {
    dlz(p, tf - ts + 1);
    if (tf < s || f < ts) return;
    if (s <= ts && tf <= f) {
        tr[p] += (tf - ts + 1) * val;
        if (ts != tf) {
            lz[p * 2] += val;
            lz[p * 2 + 1] += val;
        }
        return;
    }
    upd(p * 2, ts, (ts + tf) / 2, s, f, val);
    upd(p * 2 + 1, (ts + tf) / 2 + 1, tf, s, f, val);
    tr[p] = tr[p * 2] + tr[p * 2 + 1];
}

ll get(int p, int ts, int tf, int s, int f) {
    dlz(p, tf - ts + 1);
    if (tf < s || f < ts) return 0;
    if (s <= ts && tf <= f) return tr[p];
    return get(p * 2, ts, (ts + tf) / 2, s, f) + get(p * 2 + 1, (ts + tf) / 2 + 1, tf, s, f);
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n >> m >> k;
    while (n2 < n) n2 <<= 1;
    tr.resize(n2 * 3);
    lz.resize(n2 * 3);
    for (int i = 0; i < n; ++i)cin >> tr[n2 + i];
    for (int i = n2 - 1; i > 0; --i) tr[i] = tr[i * 2] + tr[i * 2 + 1];
    for (int i = 0; i < m + k; ++i) {
        int t, a, b;
        ll c;
        cin >> t >> a >> b;
        if (t == 1) {
            cin >> c;
            upd(1, 1, n2, a, b, c);
        } else {
            cout << get(1, 1, n2, a, b) << '\n';
        }
    }
    return 0;
}