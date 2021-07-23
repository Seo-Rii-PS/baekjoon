//2021 SEORII®. All right reserved.
//Code created on 2021-07-23

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pff = pair<double, double>;
using pll = pair<ll, ll>;


struct line {
    pff s, f, v;
    double a{}, b{}, c{};

    line() = default;

    line(pff _s, pff _f) {
        s = _s;
        f = _f;
        v.first = f.first - s.first;
        v.second = f.second - s.second;
        a = f.second - s.second;
        b = s.first - f.first;
        c = a * s.first + b * s.second;
    }
} ls[1005];

const double EPS = 1e-6;
vector<tuple<int, int> > v;
map<pff, int> ha;
int n, L, tt, cn;
bool isv[1005], ispv[2000005];

tuple<bool, int> rv(bool v, pff p) {
    if (!v) return make_tuple(v, 0);
    tt = ha[p];
    if (!tt) {
        ++cn;
        ha[p] = cn;
        pl[cn] = p;
        return make_tuple(v, cn);
    }
    return make_tuple(v, tt);
}

tuple<bool, int> meet(line l1, line l2) {
    double det1 = l1.a * l2.b - l1.b * l2.a, det2 = l1.b * l2.c - l1.c * l2.b, det3 = l1.a * l2.c - l1.c * l2.a;
    pff p;
    if (!det1 && (det2 || det3)) return rv(false, pff());
    if (!det1) {
        double r1 = (l1.v.first * (l2.s.first - l1.s.first)) + (l1.v.second * (l2.s.second - l1.s.second)), r2 =
                (l2.v.first * (l1.s.first - l2.s.first)) + (l2.v.second * (l1.s.second - l2.s.second));
        if (r1 < -EPS && r2 < -EPS) return rv(false, pff());
        if (l1.s.first == l1.f.first) {
            if ((l1.s.second < l1.f.second) ^ (l2.s.second < l2.f.second)) {
                return rv(true, pff((l1.s.first + l2.s.first) / 2, (l1.s.second + l2.s.second) / 2));
            } else {
                if (l1.s.second < l1.f.second && l1.s.second < l2.s.second) return rv(true, l2.s);
                if (l1.s.second < l1.f.second) return rv(true, l1.s);
                if (l1.s.second > l1.f.second && l1.s.second > l2.s.second) return rv(true, l2.s);
                return rv(true, l1.s);
            }
        } else {
            if ((l1.s.first < l1.f.first) ^ (l2.s.first < l2.f.first)) {
                return rv(true, pff((l1.s.first + l2.s.first) / 2, (l1.s.second + l2.s.second) / 2));
            } else {
                if (l1.s.first < l1.f.first && l1.s.first < l2.s.first) return rv(true, l2.s);
                if (l1.s.first < l1.f.first) return rv(true, l1.s);
                if (l1.s.first > l1.f.first && l1.s.first > l2.s.first) return rv(true, l2.s);
                return rv(true, l1.s);
            }
        }
    } else {
        p = pff((l2.b * l1.c - l1.b * l2.c) / det1, (l1.a * l2.c - l1.c * l2.a) / det1);
        double r1 = (l1.v.first * (p.first - l1.s.first)) + (l1.v.second * (p.second - l1.s.second)), r2 =
                (l2.v.first * (p.first - l2.s.first)) + (l2.v.second * (p.second - l2.s.second));
        if (r1 < -EPS || r2 < -EPS) return rv(false, pff());
        if (p.first < -EPS || p.second < -EPS || (p.first - L) > EPS || (p.second - L) > EPS) return rv(false, pff());
    }
    return rv(true, p);
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    vector<tuple<int, int> > stl;
    int i, j, t, l, p;
    pff s, f;
    bool suc;
    double lg = -1, dat = 0;
    auto gl = [](tuple<int, int> a) {
        int l, p;
        tie(l, p) = a;
        double x1 = ls[l].s.first, x2 = pl[p].first;
        double y1 = ls[l].s.second, y2 = pl[p].second;
        return ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    };
    cin >> n >> L;
    for (i = 0; i < n; ++i) {
        cin >> s.first >> s.second >> f.first >> f.second;
        ls[i] = line(s, f);
    }
    for (i = 0; i < n; ++i)
        for (j = 0; j < i; ++j) {
            tie(suc, t) = meet(ls[i], ls[j]);
            if (suc) {
                v.emplace_back(tie(i, t));
                v.emplace_back(tie(j, t));
            }
        }
    for (i = 0; i < n; ++i) {
        if (ls[i].s.first == ls[i].f.first) {
            if (ls[i].s.second < ls[i].f.second) p = get<1>(rv(true, pff(ls[i].s.first, L)));
            else p = get<1>(rv(true, pff(ls[i].s.first, 0)));
            ispv[p] = 1;
        } else {
            if (ls[i].s.first < ls[i].f.first) {
                if ((ls[i].c - ls[i].a * L) / ls[i].b > L)
                    p = get<1>(rv(true, pff((ls[i].c - ls[i].b * L) / ls[i].a, L)));
                else if ((ls[i].c - ls[i].a * L) / ls[i].b < 0) p = get<1>(rv(true, pff((ls[i].c) / ls[i].a, 0)));
                else p = get<1>(rv(true, pff(L, (ls[i].c - ls[i].a * L) / ls[i].b)));
            } else {
                if ((ls[i].c) / ls[i].b < 0) p = get<1>(rv(true, pff((ls[i].c) / ls[i].a, 0)));
                else if ((ls[i].c) / ls[i].b > L) p = get<1>(rv(true, pff((ls[i].c - ls[i].b * L) / ls[i].a, L)));
                else p = get<1>(rv(true, pff(0, (ls[i].c) / ls[i].b)));
            }
            ispv[p] = 1;
        }
        v.emplace_back(make_tuple(i, p));
    }
    sort(v.begin(), v.end(), [&gl](tuple<int, int> a, tuple<int, int> b) {
        if (gl(a) != gl(b)) return (gl(a) < gl(b));
        return a < b;
    });
    v.erase(unique(v.begin(), v.end()), v.end());
    for (auto &i:v) {
        if (lg != gl(i)) {
            stl.clear();
        }
        tie(l, p) = i;
        lg = gl(i);
        if (isv[l]) continue;
        if (ispv[p]) {
            isv[l] = true;
            dat = max(dat, gl(i));
            for (auto j:stl) {
                int lt, pt;
                tie(lt, pt) = j;
                if (p != pt) continue;
                if (isv[lt]) continue;
                dat = max(dat, gl(j));
                isv[lt] = true;
            }
        } else {
            ispv[p] = true;
            stl.push_back(i);
        }
    }
    cout << sqrt(dat) << endl;
}