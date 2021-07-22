//2021 SEORII®. All right reserved.
//Code created on 2021-07-22

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string s;
    while (true) {
        cin >> s;
        if (s == "#") break;
        int r = 0;
        for (auto &i:s) {
            r *= 8;
            if (i == '\\') r += 1;
            if (i == '(') r += 2;
            if (i == '@') r += 3;
            if (i == '?') r += 4;
            if (i == '>') r += 5;
            if (i == '&') r += 6;
            if (i == '%') r += 7;
            if (i == '/') r -= 1;
        }
        cout << r << '\n';
    }
    return 0;
}