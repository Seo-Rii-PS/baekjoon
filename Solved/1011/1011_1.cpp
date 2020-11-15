//2020 SEORII®. All right reserved.
//Code created on 2020-11-14

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    unsigned int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a > b) a = a - b;
        else a = b - a;
        b = ceil(sqrt(a));
        if (b * (b - 1) >= a) cout << b * 2 - 2 << endl;
        else cout << b * 2 - 1 << endl;
    }
    return 0;
}