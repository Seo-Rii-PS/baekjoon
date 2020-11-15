//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << (a * a + b * b + c * c + d * d + e * e) % 10 << endl;
    return 0;
}