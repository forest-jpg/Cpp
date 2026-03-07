// 問題文
// N 問の問題からなるコンテストが開催され、
// i (1≤i≤N) 問目の配点は A_i 点でした。
//
// すぬけくんはこのコンテストに参加し、
// B_1, B_2, …, B_M 問目の M 問を解きました。
// すぬけくんの総得点を求めてください。
//
// ただし、総得点とは解いた問題の配点の総和を意味するものとします。
//
// 制約
// 1≤M≤N≤100
// 1≤A_i≤100
// 1≤B_1 < B_2 < … < B_M ≤N
// 入力は全て整数
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N M
// A_1 A_2 … A_N
// B_1 B_2 … B_M
//
// 出力
// 答えを整数として出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N),B(M);
    rep(i, 0, N) cin >> A.at(i);
    rep(i, 0, M) cin >> B.at(i);
    
    int sum = 0;
    rep(i, 0, M) {
        sum += A.at(B.at(i)-1);
    }
    
    cout << sum << "\n";
    
    return 0;
}
