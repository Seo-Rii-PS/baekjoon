//2020 SEORII®. All right reserved.
//Code created on 2020-11-17

#include <bits/stdc++.h>

using namespace std;
using pi = pair<int, int>;
vector<pi> v;
pi fv;

int ccw(pi a, pi b, pi c) {
    pi v1 = make_pair(b.first - a.first, b.second - a.second), v2 = make_pair(c.first - b.first, c.second - b.second);
    if (v1.first * v2.second - v1.second * v2.first > 0) return 1;
    if (v1.first * v2.second - v1.second * v2.first < 0) return -1;
    return 0;
}

bool f(pi &a, pi &b) {
    if (ccw(fv, a, b) > 0) return true;
    if (ccw(fv, a, b) == 0) return abs(a.first - fv.first) < abs(b.first - fv.first);
    return false;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, m = 0;
    cin >> n;
    v.resize(n);
    for (auto &i:v)cin >> i.first >> i.second;
    for (int i = 0; i < n; ++i) if (v[i] < v[m]) m = i;
    swap(v[v.size() - 1], v[m]);
    fv = v[v.size() - 1];
    v.pop_back();
    sort(v.begin(), v.end(), f);
    queue<pi> q;
    q.push(fv);
    for (auto &i:v) {
        while (q.size() > 1 && ccw(*(--(--q.back())), q.back(), i) <= 0) q.pop();
        q.push(i);
    }
    cout << q.size() << endl;
    return 0;
}