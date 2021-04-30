//2020 SEORII®. All right reserved.
//Code created on 2020-11-21

#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> fact(int s) {
    vector<pair<int, int>> v;
    for (int i = 2; s > 1; ++i) {
        int t = 0;
        while (s % i == 0) {
            ++t;
            s /= i;
        }
        if (t) v.push_back(make_pair(i, t));
    }
    return v;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    auto t = fact(n);
    for (auto &i:t) {
        while (i.second--) cout << i.first << '\n';
    }
    return 0;
}