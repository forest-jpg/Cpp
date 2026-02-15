// 問題文
// 1118 のような、3 つ以上の同じ数字が連続して並んだ 
// 4 桁の整数を 良い整数 とします。
// 4 桁の整数 N が与えられるので、N が 良い整数 かどうかを答えてください。

// 制約
// 1000≦N≦9999
// 入力は整数からなる

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N

// 出力
// N が 良い整数 ならば Yes を、そうでなければ No を出力せよ。
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long ll_N;

    cin >> ll_N; // LCOV_EXCL_BR_LINE
    long long ll_ptn = ll_N % 10;
    long long ll_tgt;
    string ans = "No";
    size_t cnt = 0;
    for (size_t i = 0; i < 3; i++) {
        ll_N /= 10;
        ll_tgt = ll_N % 10;
        if (ll_ptn == ll_tgt) {
            cnt++;
            if (cnt >= 2) break;
        } else {
            ll_ptn = ll_tgt;
            cnt = 0;
        }
    }
    if (cnt == 2) {
        ans = "Yes";
    }
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}