// 問題文
// シカのAtCoDeerくんは二つの正整数 a, b を見つけました。
// a と b の積が偶数か奇数か判定してください。

// 制約
// 1 ≤ a, b ≤ 10000
// a, b は整数

// 入力
// 入力は以下の形式で標準入力から与えられる。
// a b

// 出力
// 積が奇数なら Odd と、偶数なら Even と出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    int a, b;
    cin >> a >> b; // LCOV_EXCL_BR_LINE
    string ans;
    if (a * b % 2 == 0) ans = "Even";
    else ans = "Odd";

    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}