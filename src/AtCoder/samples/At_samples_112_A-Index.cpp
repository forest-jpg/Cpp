// 問題文
// 文字列 s と整数 i (1≦i≦|s|) が与えられます。
// s の i 文字目を出力してください。
//
// なお、|s| は文字列 s の長さを表します。
//
// 制約
// 1≦|s|≦100
// s は英小文字のみからなる。
// 1≦i≦|s|
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// s
// i
//
// 出力
// s の i 文字目を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    int i;
    cin >> s >> i;
    
    cout << s[i - 1] << "\n";

    return 0;
}
