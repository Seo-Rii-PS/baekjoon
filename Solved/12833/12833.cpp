//2020 SEORII®. All right reserved.
//Code created on 2020-11-22

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;
    if (c & 1) cout << (a ^ b) << endl;
    else cout << a << endl;
    return 0;
}