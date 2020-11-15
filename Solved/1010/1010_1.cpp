//2020 SEORII®. All right reserved.
//Code created on 2020-11-14

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll ncm(ll a, ll b) {
    if (b < a / 2) b = a - b;
    vector<ll> div, d2;
    ll su = 1;
    for (ll i = 1; i <= a - b; ++i) div.push_back(i);
    for (ll t = b + 1; t <= a; ++t) {
        su *= t;
        d2.clear();
        for (auto i:div) {
            if (su % i == 0) su /= i;
            else d2.push_back(i);
        }
        div = d2;
    }
    return su;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << ncm(b, a) << endl;
    }
    return 0;
}