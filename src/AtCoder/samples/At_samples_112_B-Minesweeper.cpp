// 問題文
// H×W のマス目が与えられます。
// 入力において、全てのマスは文字で表されており、
// . は空きマス、# は爆弾マスに対応します。
// マス目は H 個の文字列 S_1, ..., S_H で表されます。
// 文字列 S_i の j 文字目は、マス目の上から i 番目、
// 左から j 番目のマスに対応します。
// (1≦i≦H, 1≦j≦W)

// イルカは各空きマスの上下左右および斜めの 8 方向で
// 隣接しているマスに爆弾マスが何個あるか気になっています。
// そこで、各空きマスに対応する . を、その空きマスの
// 周囲 8 方向に隣接するマスにおける爆弾マスの個数を
// 表す数字で置き換えることにしました。

// 以上の規則で置き換えられた後のマス目を出力してください。

// 制約
// 1≦H, W≦50
// S_i は # と . からなる長さ W の文字列

// 入力
// 入力は以下の形式で標準入力から与えられる。
// H W
// S_1
// :
// S_H

// 出力
// 置き換えられた後のマス目を H 行の文字列で出力せよ。
// i 行目に出力する文字列 T_i の長さは W であり、
// T_i の j 文字目は、置き換えられた後のマス目の
// 上から i 番目、左から j 番目のマスに対応させよ。
// (1≦i≦H, 1≦j≦W)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> s(H);
    rep(i, 0, H){
        string tmp;
        cin >> tmp;
        s[i] = tmp;
    }
    rep(y, 0, H) rep(x, 0, W) if (s[y][x] == '.') {
        int cnt = 0;
        rep(dx, -1, 2) rep(dy, -1, 2) {
            if (dx == 0 && dy == 0) continue;
            int xx = x + dx;
            int yy = y + dy;
            if (xx >= 0 && xx < W && yy >= 0 && yy < H) {
                if (s[yy][xx] == '#') cnt++;
            }
        }
        s[y][x] = char('0' + cnt);
    }
    rep(i, 0, H) cout << s[i] << "\n";
    // int ans[H][W] = {0};
    // rep(i, H){
    //     rep(j, W) ans[i][j] = 0;
    // }
    // rep(i, H){
    //     rep(j, W){
    //         if (s[i][j] == '#') {
    //             if (i > 0 ) {
    //                 if (j > 0) ans[i - 1][j - 1]++;
    //                 ans[i - 1][j]++;
    //                 if (j < W - 1) ans[i - 1][j + 1]++;
    //             }
    //             if (j > 0) ans[i][j - 1]++;
    //             if (j < W - 1) ans[i][j + 1]++;
    //             if (i < H - 1) {
    //                 if (j > 0) ans[i + 1][j - 1]++;
    //                 ans[i + 1][j]++;
    //                 if (j < W - 1) ans[i + 1][j + 1]++;
    //             }
    //         }
    //     }
    // }
    // rep(i, H){
    //     rep(j, W){
    //         if (s[i][j] != '#') cout << ans[i][j];
    //         else cout << '#';
    //     }
    //     cout << "\n";
    // }

    return 0;
}
