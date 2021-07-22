//2020 SEORII®. All right reserved.
//Code created on 2021-07-22

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int x, y, w, h, a = INT_MAX;
    cin >> x >> y >> w >> h;
    a = min(a, x);
    a = min(a, y);
    a = min(a, w - x);
    a = min(a, h - y);
    cout << a << endl;
    return 0;
}