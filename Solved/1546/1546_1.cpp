//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, t, ma = 0;
    double s = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        s += t;
        ma = max(ma, t);
    }
    cout << s / n / ma * 100 << endl;
    return 0;
}