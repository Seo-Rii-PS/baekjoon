//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

vector<int> pa, h;
int n;

int geth(int p) {
    if (!pa[p]) {
        h[p] = 1;
        return 1;
    }
    if (!h[p]) h[p] = geth(pa[p] + 1);
    return h[p];
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n;
    pa.resize(n + 1);
    h.resize(n + 1);
    int a, b;
    for (int i = 1; i < n; ++i) {
        cin >> a >> b;
        pa[b] = a;
    }
    for (int i = 1; i <= n; ++i) geth(i);

    return 0;
}