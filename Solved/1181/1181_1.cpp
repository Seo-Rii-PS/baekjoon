//2020 SEORII®. All right reserved.
//Code created on 2021-07-22

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

bool comp(string &a, string &b) {
    if (a.length() < b.length()) return true;
    if (a.length() > b.length()) return false;
    return a < b;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> s(n);
    for (auto &i:s)cin >> i;
    sort(s.begin(), s.end(), comp);
    s.erase(unique(s.begin(), s.end()), s.end());
    for (auto &i:s)cout << i << '\n';
    return 0;
}