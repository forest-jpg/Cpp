// 問題文
// 1 以上 N 以下の整数のうち、
// 10 進法での各桁の和が A 以上 B 以下であるものの総和を求めてください。

// 制約
// 1 ≤ N ≤ 10^4
// 1 ≤ A ≤ B ≤ 36
// 入力はすべて整数である

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// A
// B

// 出力
// 1 以上 N 以下の整数のうち、
// 10 進法での各桁の和が A 以上 B 以下であるものの総和を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    int n, a, b;
    cin >> n >> a >> b; // LCOV_EXCL_BR_LINE
    int ans = 0;
    rep(i, 1, n + 1) {
        int sum = 0, calc = i;
        for(; calc > 0;) {
            sum += (calc % 10);
            calc /= 10;
        }
        if (sum >= a && sum <= b) ans += i;
    }
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}