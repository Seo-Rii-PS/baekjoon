//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, s, ma = INT_MIN, mi = INT_MAX;
    cin >> n;
    while (n--) {
        cin >> s;
        ma = max(ma, s);
        mi = min(mi, s);
    }
    cout << mi << ' ' << ma << endl;
    return 0;
}