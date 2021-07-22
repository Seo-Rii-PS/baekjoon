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
    vector<bool> paint(f - s + 1);
    for (ll i = 2; i * i <= f; ++i) {
        ll d = i * i;
        for (ll j = s / d * d; j <= f; j += d) {
            if (j >= s)paint[j - s] = true;
        }
    }
    ll cnt = 0;
    for (ll i = 0; i < paint.size(); ++i) if (!paint[i]) ++cnt;
    cout << cnt << endl;
    return 0;
}