// 問題文
// 高橋君が
// 100 階建てのビルにいます。
//
// 高橋君は
// 2 階分までの上り、または、
// 3 階分までの下りであれば移動には階段を使い、そうでないときエレベーターを使います。
//
// 高橋君が
// X 階から
// Y 階への移動に使うのは階段ですか？
//
// 制約
// 1≤X,Y≤100
// X≠Y
// 入力は全て整数である
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
//
// X
// Y
//
// 出力
// 移動に使うのが階段ならば Yes、エレベーターならば No を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X > Y && X - Y <= 3) cout << "Yes" << "\n";
    else if (X < Y && Y - X <= 2) cout << "Yes" << "\n";
    else cout << "No" << "\n";

    return 0;
}