//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string t;
    array<int, 26> a = {0};
    cin >> t;
    for (auto &i:t) {
        ++a[toupper(i) - 'A'];
    }
    int ma = 0, fl = 0;
    for (int i = 1; i < 26; ++i) {
        if (a[i] > a[ma]) {
            fl = false;
            ma = i;
        } else if (a[i] == a[ma]) fl = true;
    }
    if (fl) cout << '?' << endl;
    else cout << char(ma + 'A') << endl;
    return 0;
}