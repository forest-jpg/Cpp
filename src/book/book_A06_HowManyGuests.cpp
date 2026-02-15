// 累積和
// N日間のうち、i日目にはAi人来場。
// 以下のQこの質問に答えよ。
// Qi：Li日～Ri日の総来場者数は？
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
    vector<int> a(n, 0), sum(n, 0), l(q, 0), r(q, 0);
    rep(i, 0, n) cin >> a.at(i);
    sum.at(0) = a.at(0);
    rep(i, 1, n) sum.at(i) += sum.at(i - 1) + a.at(i);
    rep(i, 0, q) cin >> l.at(i) >> r.at(i);

    rep(i, 0, q) cout << sum.at(r.at(i)-1) - sum.at(l.at(i)-2) << "\n";   // LCOV_EXCL_BR_LINE

    return 0;
}
