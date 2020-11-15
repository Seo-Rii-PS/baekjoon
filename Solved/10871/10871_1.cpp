//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, x, t;
    cin >> n >> x;
    while (n--) {
        cin >> t;
        if (t < x) cout << t << ' ';
    }
    return 0;
}