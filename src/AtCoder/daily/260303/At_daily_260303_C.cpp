// 問題文
// 正整数 x に対して、f(x) を x の十進表記における各桁の和として定義します。
// 例えば、f(123) = 1 + 2 + 3 = 6 です。
//
// 無限数列 A = (A_0, A_1, A_2, …) を以下の式により定義します。
// A_0 = 1
// i ≥ 1 のとき A_i = Σ(j=0 to i-1) f(A_j)
//
// 正整数 N が与えられます。
// A_N の値を求めてください。
//
// 制約
// N は 1 以上 100 以下の整数
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
//
// 出力
// 答えを出力せよ。


#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
#define rep(i, s, n) for (ull i = s; i < (ull)(n); i++)

ull sum_scale(ull num) {
    ull rtn = 0;
    while (num > 0) {
        rtn += (num % 10);
        num /= 10;
    }
    return rtn;
}

int main() {
    int N;
    cin >> N;

    vector<ull> calc(N+1, 1);
    vector<ull> sum(N+1, 1);
    rep(i, 2, N+1) sum[i] = sum[i-1] + sum_scale(sum[i-1]);
    // rep(i, 2, N+1) calc[i] = calc[i-1] + sum_scale(i-1);

    cout << sum[N] << "\n";

    return 0;
}