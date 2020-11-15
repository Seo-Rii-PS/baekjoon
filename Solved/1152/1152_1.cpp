//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    char t;
    int c = 0;
    bool fl = false, la = false;
    while (scanf("%c", &t)) {
        if (t == '\n') break;
        if (t == ' ' && la) fl = true;
        else if (isalpha(t)) {
            la = true;
            if (fl) ++c;
            fl = false;
        }
    }
    if (la) cout << c + 1 << endl;
    else cout << 0 << endl;
    return 0;
}