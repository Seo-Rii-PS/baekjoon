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
    string s;
    int n;
    ll ans = 0;
    cin >> n >> s;
    for (int i = n - 1; i >= 0; i--) {
        ans *= 31;
        ans += s[i] - 'a' + 1;
        ans %= 1234567891;
    }
    cout << ans << endl;
    return 0;
}