//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) cout << '*';
        cout << '\n';
    }
    return 0;
}