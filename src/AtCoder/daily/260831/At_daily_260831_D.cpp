// 問題文
// 正の整数 N が与えられます。
// N = 2^x * 3^y を満たす整数 x, y が存在するなら Yes、
// そうでなければ No と出力してください。
//
// 制約
// 1 <= N <= 10^18
// N は整数
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
//
// 出力
// 条件を満たす整数 x, y が存在するなら Yes、
// そうでなければ No と 1 行に出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    ll N;
    cin >> N;

    while(N % 2 == 0){
        N = N / 2;
    }
    while(N % 3 == 0){
        N = N / 3;
    }
    if (N == 1) cout << "Yes" << "\n";
    else cout << "No" << "\n";

    return 0;
}