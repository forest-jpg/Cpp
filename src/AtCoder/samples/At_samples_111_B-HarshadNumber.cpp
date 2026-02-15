// 問題文
// 整数 X を十進法で表したときの各桁の数字の和を 
// f(X) としたとき、X が f(X) で割り切れる場合、X はハーシャッド数です。
// 整数 N が与えられるので、ハーシャッド数かどうか判定してください。

// 制約
// 1≦N≦10^8
// 入力は全て整数

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N

// 出力
// N がハージャッド数ならば Yes を、そうでなければ No を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // LCOV_EXCL_BR_LINE
    /* setを使った解放 */
    ll N;
    cin >> N; // LCOV_EXCL_BR_LINE
    int sum = 0, tmp = N;
    rep(i, 9){
        sum += (tmp % 10);
        tmp /= 10;
    }

    if (N % sum) cout << "No" << "\n"; // LCOV_EXCL_BR_LINE
    else cout << "Yes" << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
