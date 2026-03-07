// 問題文
// 文字列 S が与えられます。ここで、S の 1 文字目は英大文字、
// 2 文字目以降は英小文字です。
//
// S の 1 文字目と UPC をこの順に結合した文字列を出力してください。
//
// 制約
// - S は長さ 1 以上 100 以下の文字列
// - S の 1 文字目は英大文字
// - S の 2 文字目以降は英小文字
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// S
//
// 出力
// S の 1 文字目と UPC をこの順に結合した文字列を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;

    cout << S.at(0) << "UPC" << "\n";

    return 0;
}