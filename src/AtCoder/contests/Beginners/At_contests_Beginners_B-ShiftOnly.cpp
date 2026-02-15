// 問題文
// 黒板に N 個の正の整数 A_1, ..., A_N が書かれています。
//
// すぬけ君は、黒板に書かれている整数がすべて偶数であるとき、次の操作を行うことができます。
// 黒板に書かれている整数すべてを、2 で割ったものに置き換える。
//
// すぬけ君は最大で何回操作を行うことができるかを求めてください。
//
// 制約
// 1 ≤ N ≤ 200
// 1 ≤ A_i ≤ 10^9
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// A_1 A_2 ... A_N
//
// 出力
// すぬけ君は最大で何回操作を行うことができるかを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    int n;
    cin >> n; // LCOV_EXCL_BR_LINE
    vector<int> a(n, 0);
    rep(i, 0, n) cin >> a.at(i); // LCOV_EXCL_BR_LINE
    int ans = 0;
    bool is_goon = true;
    while(is_goon) {
        rep(i, 0, n) {
            if ((a.at(i) & 1) == 1) {
                is_goon = false;
                break;
            }
            a.at(i) = a.at(i) >> 1;
        }
        if (is_goon) ans++;
    }
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}