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
    queue<int> qu;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        int x;
        cin >> s;
        if (s == "push") {
            cin >> x;
            qu.push(x);
        }
        if (s == "pop") {
            if (qu.empty()) cout << -1 << endl;
            else {
                cout << qu.front() << endl;
                qu.pop();
            }
        }
        if (s == "size") cout << qu.size() << endl;
        if (s == "empty") cout << (qu.empty() ? 1 : 0) << endl;
        if (s == "front") cout << (qu.empty() ? -1 : qu.front()) << endl;
        if (s == "back") cout << (qu.empty() ? -1 : qu.back()) << endl;
    }
    return 0;
}