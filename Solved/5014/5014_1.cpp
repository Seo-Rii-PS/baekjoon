//2020 SEORII®. All right reserved.
//Code created on 2020-11-16

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;
    queue<pair<int, int>> q;
    vector<bool> v(f + 1);
    v[s] = true;
    q.push(make_pair(0, s));
    while (!q.empty()) {
        auto np = q.front();
        q.pop();
        if (np.second == g) {
            cout << np.first << endl;
            exit(0);
        }
        if (np.second + u <= f && !v[np.second + u]) {
            v[np.second + u] = true;
            q.push(make_pair(np.first + 1, np.second + u));
        }
        if (np.second - d >= 1 && !v[np.second - d]) {
            v[np.second - d] = true;
            q.push(make_pair(np.first + 1, np.second - d));
        }
    }
    cout << "use the stairs" << endl;
    return 0;
}