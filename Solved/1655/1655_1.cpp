//2020 SEORII®. All right reserved.
//Code created on 2020-11-16

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, x, y;
    cin >> n;
    multiset<pair<int, int>> s;
    cin >> x;
    s.insert(make_pair(x, 0));
    cout << x << '\n';
    auto it = s.begin(), tit = it;
    for (int i = 0; i * 2 + 1 < n; ++i) {
        cin >> x;
        s.insert(make_pair(x, i * 2 + 1));
        tit = it;
        if (x >= it->first) cout << tit->first << '\n';
        else cout << (--tit)->first << '\n';
        if (n % 2 == 0 && i * 2 + 2 == n) break;
        cin >> y;
        s.insert(make_pair(y, i * 2 + 2));
        if (x < it->first && y < it->first) --it;
        else if (x >= it->first && y >= it->first) ++it;
        cout << it->first << '\n';
    }
    return 0;
}