//2021 SEORII®. All right reserved.
//Code created on 2021-07-07

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll s, f;
    cin >> s >> f;
    vector<ll> primes;
    for (ll i = 2; i * i <= f; ++i) {
        bool fl = false;
        for (auto &j:primes)
            if (i % j == 0) {
                fl = true;
                break;
            }
        if (!fl) primes.push_back(i);
    }
    vector<bool> paint(f - s + 1);
    for (auto &i:primes) {
        ll d = i * i;
        for (ll j = s / d * d; j <= f; j += d) {
            if (j >= s)paint[j - s] = true;
        }
    }
    ll cnt = 0;
    for (bool i:paint) if (!i) ++cnt;
    cout << cnt << endl;
    return 0;
}