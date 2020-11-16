//2020 SEORII®. All right reserved.
//Code created on 2020-11-17

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, x;
    cin >> n;
    array<int, 10000> a = {0};
    for (int i = 0; i < n; ++i) {
        cin >> x;
        ++a[x - 1];
    }
    for (int i = 0; i < 10000; ++i) {
        for (int j = 0; j < a[i]; ++j) cout << i + 1 << '\n';
    }
    return 0;
}