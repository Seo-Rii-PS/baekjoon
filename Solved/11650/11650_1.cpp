//2020 SEORII®. All right reserved.
//Code created on 2020-11-17

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &i:v)cin >> i.first >> i.second;
    sort(v.begin(), v.end());
    for (auto &i:v)cout << i.first << ' ' << i.second << '\n';
    return 0;
}