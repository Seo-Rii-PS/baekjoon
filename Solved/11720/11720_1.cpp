//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, s = 0;
    char c;
    cin >> n;
    while (n--) {
        cin >> c;
        s += c - '0';
    }
    cout << s << endl;
    return 0;
}