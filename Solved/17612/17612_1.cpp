//2021 SEORII®. All right reserved.
//Code created on 2022-01-11

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using tiii = tuple<int, int, int>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, k;
    ll res = 0;
    cin >> n >> k;
    vector<pii> u(n);
    vector<tiii> s;
    priority_queue<tiii, vector<tiii>, greater<tiii>> pq;
    for (auto &i: u) cin >> i.first >> i.second;
    for (auto &i: u) {
        if (pq.size() < k) {
            pq.push({i.second, pq.size(), i.first});
            continue;
        }
        auto r = pq.top();
        pq.pop();
        s.push_back({get<0>(r), k - get<1>(r), get<2>(r)});
        pq.push({i.second + get<0>(r), get<1>(r), i.first});
    }
    while (!pq.empty()) {
        auto r = pq.top();
        pq.pop();
        s.push_back({get<0>(r), k - get<1>(r), get<2>(r)});
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < n; ++i) res += (ll) (i + 1) * get<2>(s[i]);
    cout << res << endl;
    return 0;
}