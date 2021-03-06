//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

string add(string a, string b) {
    string c;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    while (a.length() > b.length()) b += '0';
    int f = 0;
    for (int i = 0; i < a.length(); ++i) {
        c += a[i] + b[i] - '0' + f;
        f = 0;
        while (c[i] > '9') {
            ++f;
            c[i] -= 10;
        }
    }
    if (f) c += '0' + f;
    reverse(c.begin(), c.end());
    return c;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    if (a.length() < b.length() || (a.length() == b.length() && a < b)) {
        swap(a, b);
    }
    cout << add(a, b) << endl;
    return 0;
}