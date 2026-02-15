// 問題文
// 縦H ピクセル、横W ピクセルの画像があります。
// 各ピクセルは英小文字で表されます。
// 上からi番目、左からj番目のピクセルはa_ijです。
//
// この画像の周囲1ピクセルを#で囲んだものを出力してください。
//
// 制約
// 1 ≤ H, W ≤ 100
// a_ijは英小文字である。
//
// 入力
// H W
// a_11 ... a_1W
// :
// a_H1 ... a_HW
//
// 出力
// 画像の周囲1ピクセルを#で囲んだものを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int H, W;
    cin >> H >> W; // LCOV_EXCL_BR_LINE
    vector<vector<char>> a(H, vector<char>(W));
    rep(i, 0, H) rep(j, 0, W) cin >> a.at(i).at(j); // LCOV_EXCL_BR_LINE
    rep(i, 0, W + 2) cout << '#'; // LCOV_EXCL_BR_LINE
    cout << "\n"; // LCOV_EXCL_BR_LINE
    rep(i, 0, H) {
        cout << '#'; // LCOV_EXCL_BR_LINE
        rep(j, 0, W) cout << a.at(i).at(j); // LCOV_EXCL_BR_LINE
        cout << '#' << "\n"; // LCOV_EXCL_BR_LINE
    }
    rep(i, 0, W + 2) cout << '#'; // LCOV_EXCL_BR_LINE
    cout << "\n"; // LCOV_EXCL_BR_LINE
    // // 縦 H+2、横 W+2 のグリッドを用意して、'#' で埋めておく
    // vector<string> S(H+2, string(W+2, '#'));

    // // 真ん中を埋めていく
    // for (int i = 1; i < H+1; i++) {
    //     for (int j = 1; j < W+1; j++) {
    //         S[i][j] = a[i-1][j-1];
    //     }
    // }

    // // 出力する
    // for (int i = 0; i < H+2; i++) cout << S[i] << endl; // LCOV_EXCL_BR_LINE
    return 0;
}
