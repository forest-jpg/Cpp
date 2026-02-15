/*
問題文
英小文字からなる 2 文字以上の文字列 S が与えられます。
S の先頭の文字と末尾の文字が同じ文字かどうか判定してください。

制約
S は英小文字からなる長さ 2 以上 10 以下の文字列

入力
入力は以下の形式で標準入力から与えられる。
S

出力
S の先頭の文字と末尾の文字が同じ文字ならば Yes を、異なる文字ならば No を出力せよ。
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    string s;

    cin >> s; // LCOV_EXCL_BR_LINE
    string ans;
    if (s.at(0) == s.at(s.size()-1)) ans = "Yes";
    else ans = "No";
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}