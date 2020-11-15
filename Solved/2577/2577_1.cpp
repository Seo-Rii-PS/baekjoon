//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    array<int, 10> a = {0};
    int p, q, r;
    cin >> p >> q >> r;
    p *= q * r;
    while (p) {
        ++a[p % 10];
        p /= 10;
    }
    for (auto &i:a) cout << i << endl;
    return 0;
}