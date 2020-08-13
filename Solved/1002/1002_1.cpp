//2020 SEORII®. All right reserved.
//Code created on 8/11/2020

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        double d = sqrt((double) ((p - a) * (p - a)) + (q - b) * (q - b));
        double e = d - c - r;
        if (a == p && b == q) {
            if (c == r) cout << -1 << endl;
            else cout << 0 << endl;
        } else if (abs(e) < 0.0000000001) cout << 1 << endl;
        else {
            double f = abs(c - r) - d;
            if (abs(f) < 0.0000000001) cout << 1 << endl;
            else if (f > 0) cout << 0 << endl;
            else if (e > 0) cout << 0 << endl;
            else cout << 2 << endl;
        }
    }
}