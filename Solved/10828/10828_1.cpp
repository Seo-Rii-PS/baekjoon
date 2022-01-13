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
    stack<int> st;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        int x;
        cin >> s;
        if (s == "push") {
            cin >> x;
            st.push(x);
        }
        if (s == "pop") {
            if (st.empty()) cout << -1 << endl;
            else {
                cout << st.top() << endl;
                st.pop();
            }
        }
        if (s == "size") cout << st.size() << endl;
        if (s == "empty") cout << (st.empty() ? 1 : 0) << endl;
        if (s == "top") cout << (st.empty() ? -1 : st.top()) << endl;
    }
    return 0;
}