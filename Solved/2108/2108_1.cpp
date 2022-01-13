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
    int n;
    int ma, mi, avg, cnt, mod, sum = 0, diff, mac = 0, fl = 0;
    cin >> n;
    vector<int> v(n), u(8002);
    for (auto &i: v)cin >> i;
    ma = mi = v[0];
    for (int i = 0; i < n; i++) {
        if (v[i] > ma)ma = v[i];
        if (v[i] < mi)mi = v[i];
        sum += v[i];
        u[v[i] + 4000]++;
    }
    for (auto &i: u)if (i > mac) mac = i;
    for (int i = 0; i < 8002; i++) {
        if (u[i] == mac && fl < 2) {
            mod = i - 4000;
            ++fl;
        }
    }
    avg = round(sum * 1.0 / n);
    diff = ma - mi;
    sort(v.begin(), v.end());
    cnt = v[(n - 1) / 2];
    cout << avg << endl << cnt << endl << mod << endl << diff << endl;
    return 0;
}