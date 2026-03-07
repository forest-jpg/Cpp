// 問題文
// 長さN の整数列 A=(A_1, A_2, …, A_N) と整数 X が与えられます。
// i=1,2,…,N の順に以下を行ってください。
// - もし A_i < X なら、X=A_i に更新した上で 1 を出力する。
// - そうでないなら 0 を出力する。
//
// 制約
// - 入力は全て整数
// - 1≤N,X,A_i ≤100
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// X
// A_1 A_2 … A_N
//
// 出力
// N 行出力せよ。
// そのうち k 行目には、i=k についての出力をせよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N, 0);
    rep(i, 0, N) cin >> A.at(i);
    
    rep(i, 0, N) if (A.at(i) < X) {
        X = A.at(i);
        cout << 1 << "\n";
    } else cout << 0 << "\n";
    
    return 0;
}