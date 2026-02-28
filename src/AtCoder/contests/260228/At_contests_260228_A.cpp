// 問題文
// N 個の座席が横一列に並んでいます。各座席には最大で 1 人まで座ることができます。
// 以下の条件を満たすように M 人の人を座席に座らせることができるかどうか判定してください。
//
// 隣り合う 2 つの席の両方に人が座ってはいけない。
//
// 制約
// 1 ≤ N, M ≤ 100
// 入力される値は全て整数
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// M
//
// 出力
// 条件を満たすように座席に座らせることが可能ならば Yes を、不可能ならば No を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    int n, m;
    cin >> n >> m;
    
    int cnt =0;
    rep(i, 0, n) {
        if (i % 2 == 0)cnt++;
    }


    cout << ((cnt >= m) ? "Yes" : "No") << "\n";
    
    return 0;
}