// 問題文
// AtCoder Beginner Contest は、今回で 214 回目の開催となりました。
// 
// 今までの AtCoder Beginner Contest において、出題される問題数は次のように変化しました。
// 1 回目から 125 回目までは 4 問
// 126 回目から 211 回目までは 6 問
// 212 回目から 214 回目までは 8 問
//
// N 回目の AtCoder Beginner Contest において出題された問題数を求めてください。
//
// 制約
// 1≤N≤214
// 入力は全て整数である。
//
// 入力
// N
//
// 出力
// 答えを出力せよ。

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    typedef enum{
        PERIOD_1=125,
        PERIOD_2=211,
        PERIOD_3=214,
    };
    ll N;
    cin >> N;
    
    int ans = 8;
    if (N <= PERIOD_1) ans = 4;
    else if (N <= PERIOD_2) ans = 6;
    cout << ans << "\n";

    return 0;
}