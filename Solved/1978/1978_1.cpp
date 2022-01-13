//2021 SEORII®. All right reserved.
//Code created on 2022-01-11

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

bool is_prime(int x) {
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    if (x < 2) return false;
    return true;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, s = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (is_prime(x)) ++s;
    }
    cout << s << endl;
    return 0;
}