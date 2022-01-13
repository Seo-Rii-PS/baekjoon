//2021 SEORII®. All right reserved.
//Code created on 2022-01-11

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

bool maxPriority(int c, int pr[]) {
    for (int i = c + 1; i < 10; ++i) if (pr[i]) return false;
    return true;
}

void tc() {
    int n, m, s = 0;
    cin >> n >> m;
    int pr[10] = {0};
    queue<pii> q;
    for (int i = 0; i < n; ++i) {
        int c;
        cin >> c;
        q.push({c, i});
        pr[c]++;
    }
    while (!q.empty()) {
        auto res = q.front();
        q.pop();
        if (maxPriority(res.first, pr)) {
            if (res.second == m) {
                cout << ++s << '\n';
                return;
            }
            pr[res.first]--;
            ++s;
        } else
            q.push(res);
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) tc();
    return 0;
}