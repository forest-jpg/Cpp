// 問題文
// 1 から N の番号がついた N 個のボールが袋に入っています。
// ボール i には整数 A_i が書かれています。
// Q 個のクエリを処理してください。
// クエリでは長さ K の数列 B_1, B_2, ..., B_K が与えられるので
// 以下の一連の操作を行ってください。
// ここで、B_i は全て 1 以上 N 以下で、かつ相異なります。
//
// まず、ボール B_1, ボール B_2, ..., ボール B_K を全て袋から取り出す。
// そして、現在の袋に入っているボールに書かれた整数の最小値を出力する。
// (この時、袋は空でないことが制約から保証されている。)
// その後、取り出した K 個のボールを全て袋に戻す。
//
// 制約
// 6 ≤ N ≤ 3×10^5
// 1 ≤ Q ≤ 2×10^5
// 1 ≤ A_i ≤ 10^9
// 1 ≤ K ≤ 5
// 1 ≤ B_1 < B_2 < ... < B_K ≤ N
// 全てのクエリに対する K の総和は 4×10^5 以下
// 入力される値は全て整数
//
// 入力
// N Q
// A_1 A_2 ... A_N
// query_1
// query_2
// ⋮
// query_Q
//
// クエリは以下の形式で与えられます：
// K
// B_1 B_2 ... B_K
//
// 出力
// Q 行出力してください。
// i 行目には i 番目のクエリの答えを出力してください。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    ll N, Q;
    cin >> N >> Q;
    vector<ll> A(N, 0), base(N, 0);
    rep(i, 0, N) cin >> A.at(i);
    copy(A.begin(), A.end(), base.begin());
    sort(A.begin(), A.end());

    vector<ll> ans(Q, 0);
    rep(i, 0, Q) {
        int K;
        cin >> K;
        vector<int> B(K, 0);
        rep(j, 0, K) cin >> B.at(j);
        rep(j, 0, K) {
            bool match = false;
            for(auto val : B) {
                if (A.at(j) == base.at(val-1)) {
                    match = true;
                    break;
                } 
            }
            if (!match) {
                ans.at(i) = A.at(j);
                break;
            }
        }
        if (ans.at(i) == 0) ans.at(i) = A.at(K);
    }
    rep(i, 0, Q) cout << ans.at(i) << "\n";
    
    return 0;
}