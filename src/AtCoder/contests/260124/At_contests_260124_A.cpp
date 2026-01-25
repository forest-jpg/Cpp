// 問題文
// 英小文字からなる文字列 S が与えられます。
// ここで、英小文字に含まれるドットの個数を以下のようにして定めます。
// 英小文字が i または j であるとき : 1 個
// 英小文字が i, j のいずれでもないとき : 0 個
// S のすべての文字に対するドットの個数の和を求めてください。

// 制約
// S は長さ 1 以上 10 以下の英小文字からなる文字列

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
    char S[11];

    cin >> S;
    int cnt = 0;
    rep(i, 10) {
        if ((S[i] == 'i') || (S[i] == 'j')) cnt++;
    }
    cout << cnt << "\n";

    return 0;
}