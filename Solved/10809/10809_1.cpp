//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    array<int, 26> a;
    for (auto &i:a) i = -1;
    for (int i = 0; i < s.length(); ++i) {
        if (a[s[i] - 'a'] == -1) a[s[i] - 'a'] = i;
    }
    for (auto &i:a) cout << i << ' ';
    return 0;
}