// 全探索
// 3つの1~Nの数値を選び、和がKになるパターンを数える
// ※3つの数値は区別あり
// 制約
// Nは1以上3000以下の整数
// Kは3以上9000以下の整数
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    int n, k;
    cin >> n >> k; // LCOV_EXCL_BR_LINE

    int ptn = 0;
    rep(a, 1, n + 1) rep(b, 1, n + 1) {
        int c = k - (a + b);
        if (c <= n && c >= 1) {
            ptn++;
            // cout << a << " " << b << " " << c << "\n";   // debug
        }
    }
    cout << ptn << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
