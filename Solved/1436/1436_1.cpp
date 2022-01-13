//2021 SEORII®. All right reserved.
//Code created on 2021-07-24

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int cnt = 0, n;
    cin >> n;
    for (int i = 666;; ++i) {
        int j = i;
        while (j > 99) {
            if (j % 10 == 6 && j / 10 % 10 == 6 && j / 100 % 10 == 6) {
                ++cnt;
                if (cnt == n) {
                    cout << i << endl;
                    return 0;
                }
                break;
            }
            j /= 10;
        }
    }
}