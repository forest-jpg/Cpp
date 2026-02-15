// 問題文
// 12 月 30 日の M 時から次の年になるまでは何時間か、求めてください。

// 制約
// 1≦M≦23
// 入力は全て整数

// 入力
// 入力は以下の形式で標準入力から与えられる。
// M

// 出力
// 12 月 30 日の M 時から次の年になるまでが x 時間のとき、
// x を出力せよ。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int M;
    cin >> M; // LCOV_EXCL_BR_LINE
    cout << (24 - M) + 24 << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
