//2021 SEORII®. All right reserved.
//Code created on 2022-01-13

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int gpow(int base, int exp) {
    int res = 1;
    while (exp) {
        if (exp & 1) res *= base;
        base *= base;
        exp >>= 1;
    }
    return res;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, pi, c;
    while (true) {
        cin >> n;
        if (!n) return 0;
        pi = 1;
        for (int i = 2; n > 1; ++i) {
            c = 0;
            while (n % i == 0) {
                n /= i;
                ++c;
            }
            if (c) {
                pi *= (gpow(i, c) - gpow(i, c - 1));
            }
        }
        cout << pi << '\n';
    }
    return 0;
}