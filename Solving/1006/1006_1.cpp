//2020 SEORII®. All right reserved.
//Code created on 8/14/2020

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int l = 0; l < t; ++l) {
        int n, w;
        cin >> n >> w;
        vector<pair<int, int>> v, d;
        for (int i = 0; i < n; ++i) cin >> v[i].first;
        for (int i = 0; i < n; ++i) cin >> v[i].second;
        d.clear();
        d.resize(n);
        d[0].first = 1;
        if (v[0].first + v[1].second <= w) d[0].second = 1;
        else d[0].second = 2;
        if (d[0].second == 1 || v[0].first + v[1].first <= w) d[1].first = 2;
        if(d)
        for (int i = 1; i < n; ++i) {

        }
        int mi = d[n - 1].second;
    }
    return 0;
}