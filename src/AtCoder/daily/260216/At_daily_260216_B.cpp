// 問題文
// 非負整数 
// x に対し定義される関数 
// f(x) は以下の条件を満たします。

// f(0)=1
// 任意の正整数 
// k に対し 
// f(k)=k×f(k−1)
// このとき、 
// f(N) を求めてください。

// 制約
// N は 
// 0≤N≤10 を満たす整数
// 入力
// 入力は以下の形式で標準入力から与えられる。

// N
// 出力
// 答えを整数として出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int func(int N) {
    int ans = 1;
    if (N > 0) ans = N * func(N - 1);
    return ans;
}

int main() {
    int N;
    cin >> N;

    cout << func(N) << "\n";

    return 0;
}