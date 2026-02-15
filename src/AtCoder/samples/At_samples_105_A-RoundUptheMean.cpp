// 問題文
// 2 つの正整数 a, b が与えられます。 
// a, b の平均値を x とします。 
// x の小数点以下を切り上げて得られる整数を出力してください。

// 制約
// a, b は整数である。
// 1≤a,b≤100

// 入力
// 入力は以下の形式で標準入力から与えられる。
// a 
// b

// 出力
// x の小数点以下を切り上げて得られる整数を出力せよ。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int int_a, int_b;
    cin >> int_a >> int_b; // LCOV_EXCL_BR_LINE
    int int_sum = int_a + int_b;
    if (int_sum % 2 == 0) {
        cout << int_sum / 2 << "\n"; // LCOV_EXCL_BR_LINE
    } 
    else {
        cout << (int_sum + 1) / 2 << "\n"; // LCOV_EXCL_BR_LINE
    }

    return 0;
}
