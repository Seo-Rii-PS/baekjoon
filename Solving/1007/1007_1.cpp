//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

array<bool, 20> fl;
array<pair<int, int>, 20> li;
int n;
double ans;

void dfs(int np, pair<ll, ll> sum) {
    if (np == n) {
        if (ans < 0) ans = sqrt((double) sum.first * sum.first + (double) sum.second * sum.second);
        ans = max(ans, sqrt((double) sum.first * sum.first + (double) sum.second * sum.second));
        return;
    }
    if (fl[np]) {
        dfs(np + 1, sum);
        return;
    }
    fl[np] = true;
    for (int i = np + 1; i < n; ++i) {
        if (fl[i]) continue;
        fl[i] = true;
        dfs(np + 1, make_pair(sum.first + li[i].first - li[np].first, sum.second + li[i].second - li[np].second));
        fl[i] = false;
    }
    fl[np] = false;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.precision(17);
    int t;
    cin >> t;
    while (t--) {
        ans = -1;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> li[i].first >> li[i].second;
        }
        dfs(0, make_pair(0, 0));
        cout << ans << endl;
    }
    return 0;
}