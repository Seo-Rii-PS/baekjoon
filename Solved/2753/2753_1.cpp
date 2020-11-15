//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int y;
    cin >> y;
    cout << ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) << endl;
    return 0;
}