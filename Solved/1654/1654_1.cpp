//2021 SEORII®. All right reserved.
//Code created on 2022-01-11

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

ll check(vector<ll> &v, ll s) {
    ll sum = 0;
    for (auto &i: v) sum += i / s;
    return sum;
}

ll bsearch(vector<ll> &v, ll k, ll s, ll f) {
    if (s == f) return s;
    ll mid = (s + f) / 2;
    if (check(v, mid) >= k) return bsearch(v, k, mid + 1, f);
    else return bsearch(v, k, s, mid);
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i: a) cin >> i;
    cout << bsearch(a, k, 1, UINT_MAX) - 1 << '\n';
    return 0;
}