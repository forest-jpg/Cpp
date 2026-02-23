// 2次元の累積和
// H * W のマス目に数値が書いてある。
// Qこの質問が
// Qi：(Ai, Bi)、(Ci,Di)の長方形領域の数値の合計
// 各Qへの回答を出力せよ
// 制約
// H, Wは1以上1500以下の整数
// Qは1以上100000以下の整数
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    enum Point{
        POINT_A = 0,
        POINT_B,
        POINT_C,
        POINT_D,
        POINT_MAX_NUM,
    };
    int h, w;
    cin >> h >> w; // LCOV_EXCL_BR_LINE
    vector<vector<int>> x(h + 2, vector<int>(w + 2, 0));
    rep(i, 1, h + 1)rep(j, 1, w + 1) cin >> x.at(i).at(j);  // LCOV_EXCL_BR_LINE
    int q;
    cin >> q;
    vector<vector<int>> a(q, vector<int>(POINT_MAX_NUM, 0));
    rep(i, 0, q)rep(j, 0, POINT_MAX_NUM) cin >> a.at(i).at(j);  // LCOV_EXCL_BR_LINE

    vector<vector<int>> sum(h + 2, vector<int>(w + 2, 0));
    rep(i, 1, h + 1) rep(j, 1, w + 1) sum.at(i).at(j) = sum.at(i).at(j-1) + x.at(i).at(j);
    rep(i, 1, h + 1) rep(j, 1, w + 1) sum.at(i).at(j) = sum.at(i-1).at(j) + sum.at(i).at(j);
    
    rep(i, 0, q) cout << sum.at(a.at(i).at(POINT_C)).at(a.at(i).at(POINT_D)) 
                             - sum.at(a.at(i).at(POINT_C)).at(a.at(i).at(POINT_B)-1)
                             - sum.at(a.at(i).at(POINT_A)-1).at(a.at(i).at(POINT_D))
                             + sum.at(a.at(i).at(POINT_A)-1).at(a.at(i).at(POINT_B)-1) << "\n";   // LCOV_EXCL_BR_LINE

    return 0;
}
