// 問題文
// 黒板に N 個の正の整数 A_1, ..., A_N が書かれています。
// すぬけ君は、黒板に書かれている整数がすべて偶数であるとき、
// 次の操作を行うことができます。
// - 黒板に書かれている整数すべてを、2 で割ったものに置き換える。
// すぬけ君は最大で何回操作を行うことができるかを求めてください。
//
// 制約
// 1 ≤ N ≤ 200
// 1 ≤ A_i ≤ 10^9

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// A_1 A_2 ... A_N

// 出力
// すぬけ君は最大で何回操作を行うことができるかを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define INF INT_MAX/2

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /* 入力 */
    int N;
    cin >> N;
    vector<ll> A(N, 0);
    rep(i, 0, N) {
        cin >> A[i];
    }
    ll cnt;
    bool is_doing = true;
    for(cnt = 0; is_doing; cnt++){
        rep(i, 0, N) {
            if ((A[i] & 1) == 1) {
                is_doing = false;
                break;
            }
            A[i] = A[i] >> 1; 
        }
    }
    --cnt;
    cout << cnt << "\n";

    return 0;
}
