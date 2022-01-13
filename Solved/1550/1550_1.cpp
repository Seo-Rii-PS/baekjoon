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
    string s, hex = "0123456789ABCDEF";
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans *= 16;
        ans += hex.find(s[i]);
    }
    cout << ans;
    return 0;
}