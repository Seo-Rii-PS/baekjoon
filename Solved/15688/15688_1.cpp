//2020 SEORII®. All right reserved.
//Code created on 2020-11-17

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i:v) cin >> i;
    sort(v.begin(), v.end());
    for (auto &i:v) cout << i << '\n';
    return 0;
}