// 問題文
// N×N のマス目があります。
// このマス目の各マスを白色または黒色に塗ることにしました
//  (すべてのマスをどちらか片方の色に塗ります)。

// ちょうど A マスを白色に塗るとき、黒色に塗ることになるマスはいくつあるでしょうか。

// 制約
// 1≦N≦100
// 0≦A≦N^2
 
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// A

// 出力
// 黒色に塗ることになるマスの個数を出力せよ。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int int_N, int_A;
    cin >> int_N >> int_A; // LCOV_EXCL_BR_LINE
    cout << (int_N * int_N - int_A) << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
