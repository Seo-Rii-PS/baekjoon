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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (a + b + c + d) / 60 << "\n" << (a + b + c + d) % 60 << endl;
    return 0;
}