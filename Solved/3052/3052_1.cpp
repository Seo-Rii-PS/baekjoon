//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int s, c = 0;
    array<bool, 42> fl = {0};
    for (int i = 0; i < 10; ++i) {
        cin >> s;
        if (!fl[s % 42]) ++c;
        fl[s % 42] = true;
    }
    cout << c << endl;
    return 0;
}