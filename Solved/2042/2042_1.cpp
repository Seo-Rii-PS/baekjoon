//2021 SEORII®. All right reserved.
//Code created on 2021-07-23

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int n, m, k, n2 = 1;
vector<ll> tr;

void upd(int p) {
    if (!p) return;
    tr[p] = tr[p * 2] + tr[p * 2 + 1];
    upd(p / 2);
}

ll get(int p, int ts, int tf, int s, int f) {
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
    for (int i = 0; i < n; ++i)cin >> tr[n2 + i];
    for (int i = n2 - 1; i > 0; --i) tr[i] = tr[i * 2] + tr[i * 2 + 1];
    for (int i = 0; i < m + k; ++i) {
        ll t, a, b;
        cin >> t >> a >> b;
        if (t == 1) {
            tr[n2 + a - 1] = b;
            upd((n2 + a - 1) / 2);
        } else {
            cout << get(1, 1, n2, a, b) << '\n';
        }
    }
    return 0;
}