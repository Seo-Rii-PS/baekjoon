//2020 SEORII®. All right reserved.
//Code created on 8/14/2020

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, k, ti[1002], ma_ti[1002], tar;
        set<int> v[1002];
        vector<int> li[1002];
        cin >> n >> k;
        for (int j = 0; j < n; ++j) cin >> ti[j];
        for (int j = 0; j < n; ++j) ma_ti[j] = 0;
        for (int j = 0; j < k; ++j) {
            int a, b;
            cin >> a >> b;
            v[b - 1].insert(a - 1);
            li[a - 1].push_back(b - 1);
        }
        cin >> tar;
        --tar;
        priority_queue<int, vector<int>, greater<int>> qu;
        for (int j = 0; j < n; ++j) {
            if (v[j].empty()) qu.push(j);
        }
        while (!qu.empty()) {
            auto x = qu.top();
            qu.pop();
            if (x == tar) {
                cout << ma_ti[x] + ti[x] << endl;
                break;
            }
            for (auto j:li[x]) {
                v[j].erase(x);
                ma_ti[j] = max(ma_ti[j], ma_ti[x] + ti[x]);
                if (v[j].empty()) qu.push(j);
            }
        }
    }
}