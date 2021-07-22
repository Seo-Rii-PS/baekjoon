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
        if (s == "0") break;
        string r = s;
        reverse(r.begin(), r.end());
        if (s == r) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}