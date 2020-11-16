//2020 SEORII®. All right reserved.
//Code created on 2020-11-16

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, k, an = 1;
    cin >> n >> k;
    vector<int> w(n), v(n), li(k + 1);
    li[0] = 1;
    for (int i = 0; i < n; ++i) cin >> w[i] >> v[i];
    for (int i = 0; i < n; ++i) {
        for (int j = k - 1; j >= 0; --j) {
            if (!li[j]) continue;
            if (j + w[i] > k) continue;
            li[j + w[i]] = max(li[j + w[i]], li[j] + v[i]);
            an = max(an, li[j + w[i]]);
        }
    }
    cout << an - 1 << endl;
    return 0;
}