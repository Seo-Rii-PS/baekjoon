//2021 SEORII®. All right reserved.
//Code created on 2022-01-11

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int m, n;
    cin >> m >> n;
    vector<bool> es(n + 1);
    for (int i = 2; i <= n; i++) {
        if (!es[i]) {
            for (int j = i << 1; j <= n; j += i) {
                es[j] = true;
            }
        }
    }
    for (int i = max(m, 2); i <= n; i++) {
        if (!es[i]) {
            cout << i << '\n';
        }
    }
    return 0;
}