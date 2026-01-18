// 問題文
// シカのAtCoDeerくんは二つの正整数 a,b を見つけました。
// a と b の積が偶数か奇数か判定してください。

// 制約
// 1 ≤ a,b ≤ 10000
// a,b は整数

// 入力
// 入力は以下の形式で標準入力から与えられる。
// a b

// 出力
// 積が奇数なら Odd と、 偶数なら Even と出力せよ。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int int_a, int_b;
    cin >> int_a >> int_b;
    
    string str_ans;
    if (int_a * int_b % 2 == 1) {
        str_ans = "Odd";
    }
    else {
        str_ans = "Even";
    }
    cout << str_ans << "\n";

    return 0;
}
