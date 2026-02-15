// 問題文
// N 枚のカードがあります。
// i 枚目のカードには、a_i という数が書かれています。
// Alice と Bob は、これらのカードを使ってゲームを行います。
// ゲームでは、Alice と Bob が交互に 1 枚ずつカードを取っていきます。
// Alice が先にカードを取ります。
// 2 人がすべてのカードを取ったときゲームは終了し、
// 取ったカードの数の合計がその人の得点になります。
// 2 人とも自分の得点を最大化するように最適な戦略を取った時、
// Alice は Bob より何点多く取るか求めてください。
//
// 制約
// N は 1 以上 100 以下の整数
// a_i (1≤i≤N) は 1 以上 100 以下の整数
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// a_1 a_2 a_3 ... a_N
//
// 出力
// 両者が最適な戦略を取った時、Alice は Bob より何点多く取るかを出力してください。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int n;
    cin >> n; // LCOV_EXCL_BR_LINE
    vector<int> a(n, 0);
    rep(i, 0, n) cin >> a.at(i); // LCOV_EXCL_BR_LINE
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int alice = 0, bob = 0;
    rep(i, 0, n) {
        if ((i % 2) == 0) alice += a.at(i);
        else bob += a.at(i);
    }

    // sort(A, A + N, greater<int>());
    // int v[2] = {0, 0};
    // rep(i, 0, N) v[i % 2] += A[i];

    cout << alice - bob << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
