//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    if (n >= 90) cout << 'A';
    else if (n >= 80) cout << 'B';
    else if (n >= 70) cout << 'C';
    else if (n >= 60) cout << 'D';
    else cout << 'F';
    return 0;
}