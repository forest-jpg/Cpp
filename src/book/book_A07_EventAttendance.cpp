// 累積和
// D日間開催されるイベントにN人が参加予定。
// Ai：Li日～Ri日に参加する
// 各日の参加人数を出力せよ。
// 制約
// N, Qは1以上100000以下の整数
// 1 <= Li <= Ri <= N
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    int d, n;
    cin >> d >> n; // LCOV_EXCL_BR_LINE
    vector<int> l(n, 0), r(n, 0), delta(d + 1, 0);
    rep(i, 0, n) {
        cin >> l.at(i) >> r.at(i);
        delta.at(l.at(i))++;        // 1-index
        delta.at(r.at(i) + 1)--;    // 1-index
    }
    vector<int> sum(d + 1, 0);
    rep(i, 1, d + 1) sum.at(i) = sum.at(i-1) + delta.at(i);
    rep(i, 1, d + 1) cout << sum.at(i) << "\n";   // LCOV_EXCL_BR_LINE

    return 0;
}
