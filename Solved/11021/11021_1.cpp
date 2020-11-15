//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int a, b, c, t = 0;
    cin >> c;
    while (t < c) {
        cin >> a >> b;
        ++t;
        cout << "Case #" << t << ": " << a + b << endl;
    }
}