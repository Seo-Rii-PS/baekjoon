//2020 SEORII®. All right reserved.
//Code created on 2020-11-15

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string s;
    getline(cin, s);
    if (s == "1 2 3 4 5 6 7 8") cout << "ascending\n";
    else if (s == "8 7 6 5 4 3 2 1") cout << "descending\n";
    else cout << "mixed\n";
    return 0;
}