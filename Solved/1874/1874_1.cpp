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
    int n, u = 0;
    stack<int> st;
    vector<char> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        while (u < a) {
            st.push(++u);
            v.push_back('+');
        }
        if (st.top() != a) {
            cout << "NO" << endl;
            return 0;
        } else {
            st.pop();
            v.push_back('-');
        }
    }
    for (auto &i: v) cout << i << '\n';
    return 0;
}