// 問題文
// 英小文字からなる文字列 W が入力されます。
// W の末尾に英小文字の s を付け足したものを出力してください。

// 入力
// 入力は以下の形式で標準入力から与えられる。
// W
// 1 行目に、英小文字からなる文字列 W (1 ≦ |W| ≦ 10, ここで |W| は W の長さを表す) が与えられる。

// 出力
// 標準出力に、W の末尾に英小文字の s を付け足したものを出力し、最後に改行せよ。
// 空白などの余計な出力をしてはならない。大文字と小文字は区別される。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;

    cout << s + 's' << "\n";

    return 0;
}
