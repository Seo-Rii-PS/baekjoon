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
    int n, a;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        st.insert(x);
    }
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (st.count(a)) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}