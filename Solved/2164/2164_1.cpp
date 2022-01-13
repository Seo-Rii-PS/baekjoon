//2021 SEORII®. All right reserved.
//Code created on 2022-01-11

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    queue<int> qu;
    cin >> n;
    for (int i = 1; i <= n; i++) qu.push(i);
    while (qu.size() > 1) {
        qu.pop();
        qu.push(qu.front());
        qu.pop();
    }
    cout << qu.front() << endl;
    return 0;
}