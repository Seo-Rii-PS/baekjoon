//2020 SEORII®. All right reserved.
//Code created on 8/11/2020

#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<int, int>> v;
    v.resize(51);
    v[0] = make_pair(1, 0);
    v[1] = make_pair(0, 1);
    for (int i = 2; i <= 50; ++i) v[i] = make_pair(v[i - 1].first + v[i - 2].first, v[i - 1].second + v[i - 2].second);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        cout << v[t].first << ' ' << v[t].second << endl;
    }
}