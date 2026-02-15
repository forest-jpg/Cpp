// 全探索
// N枚のカードから何枚かを選び、
// 書かれた数値aiの和がSになるパターンは存在するか
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

ll my_pow(ll base, ll exp) {
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) res *= base;
        base *= base;
        exp >>= 1;
    }
    return res;
}

int main() {
    int n, s;
    cin >> n >> s; // LCOV_EXCL_BR_LINE
    vector<int> a(n, 0);
    rep(i, 0, n) cin >> a.at(i);    // LCOV_EXCL_BR_LINE

    bool found = false;
    rep(i, 0, my_pow(2, n) + 1) {
        ll sum = 0;
        rep(j, 0, n) if ((i >> j) & 1) sum += a.at(j);
        if (sum == s) {
            found = true;
            break;
        }
    }

    string ans;
    ans = found ? "Yes" : "No";
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
