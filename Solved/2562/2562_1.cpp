//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t, s = 0, m = 0;
    for (int i = 0; i < 9; ++i) {
        cin >> t;
        if (t > m) {
            m = t;
            s = i + 1;
        }
    }
    cout << m << endl << s << endl;
    return 0;
}