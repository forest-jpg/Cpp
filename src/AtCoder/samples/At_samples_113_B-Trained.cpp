// 問題文
// AtCoder 社のトレーニング設備には N 個のボタンがついており、ちょうど
// 1 個のボタンが光っています。ボタンには、1 から N までの番号がついています。
// ボタン i が光っているときにそのボタンを押すと、ボタン i の明かりが消え、
// その後ボタン a_i が光ります。
// i = a_i であることもあります。光っていないボタンを押しても、何も起こりません。
//
// 最初、ボタン 1 が光っています。高橋君は、ボタン 2 が光っている状態で、
// トレーニングをやめたいと思っています。
//
// そのようなことは可能かどうか判定し、
// もし可能なら最低で何回ボタンを押す必要かを求めてください。
//
// 制約
// 2 ≦ N ≦ 10^5
// 1 ≦ a_i ≦ N
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// a_1 a_2 ... a_N
//
// 出力
// ボタン 2 を光らせることが不可能な場合、-1 を出力せよ。
// そうでない場合、ボタン 2 を光らせるために必要なボタンを押す回数の最小値を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int n;
    cin >> n; // LCOV_EXCL_BR_LINE
    vector<int> a(n, 0);
    bool NG = false;
    rep(i, 0, n) {
        cin >> a.at(i); // LCOV_EXCL_BR_LINE
    }

    int ans = 0, now = 0;   // 0-indexにしとく
    vector<int> passed(n, 0);
    while (now != 1) {
        passed.at(now) = 1;
        now = a.at(now);
        now--;
        if (passed.at(now) > 0 || ans > n ) {
            NG = true;
            break;
        }
        ans++;
    }
    if (NG) ans = -1;
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
