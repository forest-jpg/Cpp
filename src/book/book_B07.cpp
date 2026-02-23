// 累積和
// 時刻0 ~ T まで開店し、N人勤務する店で、
// Ai：時刻Li～Riまで出勤
// 時刻0 ~ T - 1 について、時刻 t + 0.5 までの出勤人数を出力せよ。
// 制約
// Nは1以上100000以下の整数
// 0 <= Li <= Ri <= N
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    int t, n;
    cin >> t >> n; // LCOV_EXCL_BR_LINE
    vector<int> l(n, 0), r(n, 0), delta(t + 1, 0);
    rep(i, 0, n) {
        cin >> l.at(i) >> r.at(i);
        delta.at(l.at(i))++;        // 0-index
        delta.at(r.at(i))--;    // 0-index
    }
    vector<int> sum(t, 0);
    sum.at(0) = delta.at(0);
    rep(i, 1, t) sum.at(i) = sum.at(i-1) + delta.at(i);
    rep(i, 0, t) cout << sum.at(i) << "\n";   // LCOV_EXCL_BR_LINE

    return 0;
}
