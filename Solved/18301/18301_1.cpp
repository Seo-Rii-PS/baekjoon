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
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + 1) * (b + 1) / (c + 1) - 1 << endl;
    return 0;
}