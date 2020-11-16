//2020 SEORII®. All right reserved.
//Code created on 2020-11-17

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int x1, x2, x3, y1, y2, y3, v1x, v1y, v2x, v2y;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    v1x = x2 - x1;
    v1y = y2 - y1;
    v2x = x3 - x2;
    v2y = y3 - y2;
    if (v1x * v2y - v1y * v2x > 0) cout << 1 << endl;
    else if (v1x * v2y - v1y * v2x < 0) cout << -1 << endl;
    else cout << 0 << endl;
    return 0;
}