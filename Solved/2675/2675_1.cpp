//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, t;
    string s;
    cin >> n;
    while (n--) {
        cin >> t >> s;
        for (auto &j:s) for (int i = 0; i < t; ++i) cout << j;
        cout << '\n';
    }
    return 0;
}