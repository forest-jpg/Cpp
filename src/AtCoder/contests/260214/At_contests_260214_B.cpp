// 問題文
// 英小文字からなる N 個の奇数長の文字列 S_1, S_2, ..., S_N が与えられます。
// S_1, S_2, ..., S_N のうち最も長いものの長さを m とします。
// 以下の条件を満たす文字列 T_1, T_2, ..., T_N を求めてください。
//
// 条件：
// T_i はある非負整数 k について k 個の .、S_i、k 個の . をこの順に結合してできる、
// 長さ m の文字列である。
//
// 制約
// - N は 1 以上 100 以下の整数
// - S_i は英小文字からなる長さ 1 以上 99 以下の奇数長の文字列
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// S_1
// S_2
// ...
// S_N
//
// 出力
// N 行出力せよ。i (1≤i≤N) 行目には T_i を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    int n;
    cin >> n; // LCOV_EXCL_BR_LINE
    vector<string> s(n);
    int m = 0;
    rep(i, 0, n) {
        cin >> s.at(i); // LCOV_EXCL_BR_LINE
        if (m < s.at(i).size()) m = s.at(i).size();
    }
    rep(i, 0, n) {
        int cnt = (m - s.at(i).size()) / 2;
        rep(j, 0, cnt) cout << '.'; // LCOV_EXCL_BR_LINE
        cout << s.at(i); // LCOV_EXCL_BR_LINE
        rep(j, 0, cnt) cout << '.'; // LCOV_EXCL_BR_LINE
        cout << "\n"; // LCOV_EXCL_BR_LINE
    }
    return 0;
}