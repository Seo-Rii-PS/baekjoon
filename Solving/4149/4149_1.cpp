//2020 SEORII®. All right reserved.
//Code created on 2020-12-14

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    unsigned long long s;
    cin >> s;
    int t = 1;
    while (s > 1) {
        ++t;
        while (s / t * t == s) {
            cout << t << '\n';
            s /= t;
        }
    }
    return 0;
}