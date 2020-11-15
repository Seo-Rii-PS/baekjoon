//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int h, m;
    cin >> h >> m;
    m -= 45;
    if (m < 0) {
        m += 60;
        h -= 1;
    }
    if (h == -1) h = 23;
    cout << h << ' ' << m << endl;
    return 0;
}