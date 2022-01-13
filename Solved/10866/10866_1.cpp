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
    deque<int> dq;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        int x;
        cin >> s;
        if (s == "push_front") {
            cin >> x;
            dq.push_front(x);
        }
        if (s == "push_back") {
            cin >> x;
            dq.push_back(x);
        }
        if (s == "pop_front") {
            if (dq.empty()) cout << -1 << endl;
            else {
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
        if (s == "pop_back") {
            if (dq.empty()) cout << -1 << endl;
            else {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
        if (s == "size") cout << dq.size() << endl;
        if (s == "empty") cout << (dq.empty() ? 1 : 0) << endl;
        if (s == "front") cout << (dq.empty() ? -1 : dq.front()) << endl;
        if (s == "back") cout << (dq.empty() ? -1 : dq.back()) << endl;
    }
    return 0;
}