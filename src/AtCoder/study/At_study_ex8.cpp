// 問題文
// A君はたこ焼きの情報を処理するプログラムを書いています。
// このプログラムは以下の2パターンの入力を処理します。

// パターン1
// 入力
// 1
// price
// N
// 1行目で、パターンを表す整数1が入力されます。
// 2行目で、たこ焼き1個あたりの値段
// priceが入力されます。
// 3行目で、たこ焼き1セットあたりの個数
// Nが入力されます。

// 出力
// たこ焼き1セットあたりの値段( = N × price)を出力します。

// パターン2
// 入力
// 2
// text
// price
// N
// 1行目で、パターンを表す整数2が入力されます。
// 2行目で、たこ焼きセットの説明文
// textが入力されます。
// 3行目で、たこ焼き1個あたりの値段
// priceが入力されます。
// 4行目で、たこ焼き1セットあたりの個数
// Nが入力されます。

// 出力
// 1行目で、たこ焼きセットの説明文
// textの末尾に!をつけて出力します。
// 2行目で、たこ焼き1セット辺りの値段(
// =N×price)を出力します。
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long p, price, N;
    string text;
    cin >> p; // LCOV_EXCL_BR_LINE
    switch (p) {
        case 1:
            cin >> price >> N; // LCOV_EXCL_BR_LINE
            break;
        case 2:
            cin >> text >> price >> N; // LCOV_EXCL_BR_LINE
            cout << (text + "!") << "\n"; // LCOV_EXCL_BR_LINE
            break;
    }
    cout << (N * price) << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
