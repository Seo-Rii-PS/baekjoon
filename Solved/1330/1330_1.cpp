//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if (a > b) cout << ">\n";
    if (a == b) cout << "==\n";
    if (a < b) cout << "<\n";
    return 0;
}