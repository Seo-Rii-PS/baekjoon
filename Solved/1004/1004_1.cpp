//2020 SEORII®. All right reserved.
//Code created on 8/14/2020

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int ax, ay, bx, by, n, cnt = 0;
        cin >> ax >> ay >> bx >> by >> n;
        for (int j = 0; j < n; ++j) {
            bool fl1 = false, fl2 = false;
            int cx, cy, r;
            cin >> cx >> cy >> r;
            if ((ax - cx) * (ax - cx) + (ay - cy) * (ay - cy) < r * r) fl1 = true;
            if ((bx - cx) * (bx - cx) + (by - cy) * (by - cy) < r * r) fl2 = true;
            if (fl1 ^ fl2) ++cnt;
        }
        cout << cnt << '\n';
    }
}