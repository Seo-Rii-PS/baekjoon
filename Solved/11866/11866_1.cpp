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
    int n, k, u = -1;
    cin >> n >> k;
    vector<bool> v(n);
    cout << '<';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) do { u = (u + 1) % n; } while (v[u]);
        v[u] = true;
        cout << u + 1 << (i + 1 == n ? ">" : ", ");
    }
    return 0;
}