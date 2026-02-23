// 累積和
// くじをN回引いた。i回目の結果はAiで、当たりは1、外れは0.
// 以下のQ個の質問に答えよ。
// Qi：Li～Ri回は当たりとはずれどっちが多い？
// 制約
// N, Qは1以上100000以下の整数
// Aiは1以上10000以下の整数
// 1 <= Li <= Ri <= N
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    int n, q;
    cin >> n >> q; // LCOV_EXCL_BR_LINE
    vector<int> a(n, 0), sum(n + 1, 0), l(q, 0), r(q, 0);
    rep(i, 0, n) cin >> a.at(i);
    rep(i, 0, n) sum.at(i + 1) = sum.at(i) + a.at(i);
    rep(i, 0, q) cin >> l.at(i) >> r.at(i);

    rep(i, 0, q) {
        int cnt = sum.at(r.at(i)) - sum.at(l.at(i) - 1);
        int diff = r.at(i) - (l.at(i) - 1);
        string ans;
        if (cnt*2 >= diff) ans = "Yes";
        else ans = "No";
        cout << ans << "\n";   // LCOV_EXCL_BR_LINE
    }
    return 0;
}
