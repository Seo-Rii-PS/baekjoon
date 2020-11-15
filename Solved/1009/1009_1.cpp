//2020 SEORII®. All right reserved.
//Code created on 2020-11-14

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t, n, b;
    array<pair<int, vector<int>>, 10> ar;
    for (int i = 0; i < 10; ++i) {
        t = i;
        n = 0;
        vector<int> v;
        v.push_back(i ? i : 10);
        while (++n) {
            if ((t *= i) % 10 == i) break;
            v.push_back(t % 10 ? t % 10 : 10);
        }
        ar[i] = make_pair(n, v);
    }
    cin >> t;
    while (t--) {
        cin >> n >> b;
        cout << ar[n % 10].second[(b + ar[n % 10].first - 1) % ar[n % 10].first] << endl;
    }
    return 0;
}