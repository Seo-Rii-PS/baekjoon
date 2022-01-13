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
    string s, t;
    int lp = 0, u = 1;
    cin >> s >> t;
    vector<int> pl[26];
    for (int i = 0; i < t.length(); i++) {
        pl[t[i] - 'a'].push_back(i);
    }
    for (auto &i: s) {
        if (pl[i - 'a'].empty()) {
            cout << -1 << endl;
            return 0;
        }
        auto np = lower_bound(pl[i - 'a'].begin(), pl[i - 'a'].end(), lp);
        if (np == pl[i - 'a'].end()) {
            ++u;
            lp = 0;
            np = lower_bound(pl[i - 'a'].begin(), pl[i - 'a'].end(), lp);
        }
        lp = *np + 1;
    }
    cout << u << endl;
    return 0;
}