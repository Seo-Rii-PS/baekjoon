//2020 SEORII®. All right reserved.
//Code created on 2021-07-20

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int p10[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
int z[10], nz[10];

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    for (int i = 1; i < 10; ++i) {
        z[i] = nz[i] = i * p10[i - 1];
        for (int j = 0; j < i; ++j) z[i] -= p10[j];
    }

    int n, cnt[10] = {0}, t[10] = {0};
    cin >> n;
    int sz = 0;
    while (sz < 10 && p10[sz] <= n) ++sz;
    --sz;
    while (sz >= 0) {
        int r = 0;
        while (n >= p10[sz]) {
            for (int i = 0; i < 10; ++i) cnt[i] += t[i];
            n -= p10[sz];
            ++r;
            cnt[r] += p10[sz];
            cnt[0] += sz + z[sz];
            for (int i = 1; i < 10; ++i)cnt[i] += nz[sz];
        }
        ++t[r];
        --sz;
    }
    for (auto &i:cnt)cout << i << ' ';
}