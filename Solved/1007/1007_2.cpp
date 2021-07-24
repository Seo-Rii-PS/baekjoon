//2021 SEORII®. All right reserved.
//Code created on 2021-07-24

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.precision(15);
    int t;
    cin >> t;
    while (t--) {
        int n, xs = 0, ys = 0;
        double mi = DBL_MAX;
        cin >> n;
        vector<int> v(n), x(n), y(n);
        for (int i = 0; i < n; ++i) cin >> x[i] >> y[i];
        for (int i = n / 2; i < n; ++i) v[i] = 1;
        do {
            xs = ys = 0;
            for (int i = 0; i < n; ++i) {
                if (v[i]) {
                    xs += x[i];
                    ys += y[i];
                } else {
                    xs -= x[i];
                    ys -= y[i];
                }
            }
            mi = min(mi, sqrt((double) xs * xs + (double) ys * ys));
        } while (next_permutation(v.begin(), v.end()));
        cout << mi << '\n';
    }
    return 0;
}