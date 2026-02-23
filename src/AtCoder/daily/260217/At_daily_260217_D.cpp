// 問題文
// xy 平面上に N 人の人 1, 2, …, N がおり、人 i は座標 (X_i, Y_i) にいます。
// このうち、K 人の人 A_1, A_2, …, A_K に同じ強さの明かりを持たせます。
// 座標 (x, y) にいる人が強さ R の明かりを持っている時、その明かりによって
// 中心 (x, y)、半径 R の円の内部全体(境界を含む)が照らされます。
// すべての人が少なくとも 1 つの明かりによって照らされるために必要な
// 明かりの強さの最小値を求めてください。

// 制約
// 入力は全て整数
// 1 ≤ K < N ≤ 1000
// 1 ≤ A_1 < A_2 < … < A_K ≤ N
// |X_i|, |Y_i| ≤ 10^5
// i ≠ j ならば (X_i, Y_i) ≠ (X_j, Y_j)

// 入力
// N K
// A_1 A_2 … A_K
// X_1 Y_1
// X_2 Y_2
// ⋮
// X_N Y_N

// 出力
// 答えを実数として出力せよ。
// 出力された解と想定解との絶対誤差または相対誤差が 10^(-5) 以下であるならば、
// 出力は正しいと見なされる。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> a(N, 0), x(N, 0), y(N, 0);
    rep(i, 0, K) {
        ll tmp;
        cin >> tmp;
        a.at(--tmp)++;
    }
    rep(i, 0, N) cin >> x.at(i) >> y.at(i);

    vector<ll> distance(N, 0);
    vector<ll> xx(N, 0), yy(N, 0);
    rep(i, 0, N) {
        if (a.at(i) > 0) {
            rep(j, 0, N) {
                if (a.at(j) == 0) {
                    ll dx = abs(x.at(i) - x.at(j));
                    ll dy= abs(y.at(i)-y.at(j));
                    dx *= dx;
                    dy *= dy;
                    ll tmp = (dx + dy);
                    if (distance.at(j) == 0 || (distance.at(j) && distance.at(j) > tmp)) {
                        distance.at(j) = tmp;
                        xx.at(j) = dx;
                        yy.at(j) = dy;
                    }
                }
            }
            
        }
    }
    auto it = max_element(distance.begin(), distance.end());
    size_t idx = std::distance(distance.begin(), it);
    cout << fixed << setprecision(6) << sqrt(xx.at(idx) + yy.at(idx)) << "\n";

    return 0;
}