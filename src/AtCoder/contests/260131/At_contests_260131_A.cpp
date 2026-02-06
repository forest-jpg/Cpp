// 問題文
// 英小文字からなる文字列 
// S が与えられます。
// 文字列 S の末尾に s を追加した文字列を出力してください。

// 制約
// S は英小文字からなる長さ 
// 1 以上 10 以下の文字列

// 入力
// 入力は以下の形式で標準入力から与えられる。
// S

// 出力
// 答えを出力せよ。


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    string s;

    cin >> s;
    cout << s.append("s") << "\n";

    return 0;
}