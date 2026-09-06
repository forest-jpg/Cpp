// 問題文
// 8 個の整数 S1, S2, …, S8 が与えられます。
// 以下の 3 つの条件が全て満たされるならば Yes を、
// そうでないならば No を出力してください。
//
// 条件 1: 数列 (S1, S2, …, S8) は広義単調増加である。
//        すなわち、S1 ≤ S2 ≤ … ≤ S8 である。
// 条件 2: S1, S2, …, S8 は全て 100 以上 675 以下である。
// 条件 3: S1, S2, …, S8 は全て 25 の倍数である。
//
// 制約
// 0 ≤ Si ≤ 1000
// 入力は全て整数
//
// 入力
// S1 S2 … S8
//
// 出力
// 答えを出力せよ。

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    vector<int> S(9, 0);
    rep(i, 1, 9) cin >> S[i];
    
    string ans = "Yes";
    rep(i, 1, 9) {
        if ((S[i-1] > S[i]) || 
            (S[i] < 100 || S[i] > 675) ||
            (S[i] % 25 != 0)) ans = "No";
    }
    cout << ans << "\n";

    return 0;
}