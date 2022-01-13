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
    int n, m, ma = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &i: v)cin >> i;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
            for (int k = 0; k < j; ++k)
                if (v[i] + v[j] + v[k] <= m) ma = max(ma, v[i] + v[j] + v[k]);
    cout << ma << endl;
    return 0;
}