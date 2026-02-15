// 問題文
// N個の都市があり、M本の道路があります。
// i(1≦i≦M)番目の道路は、
// 都市aiと都市bi(1≦ai,bi≦N)を双方向に結んでいます。
// 同じ2つの都市を結ぶ道路は、1本とは限りません。
// 各都市から他の都市に向けて、何本の道路が伸びているか求めてください。
//
// 制約
// 2≦N,M≦50
// 1≦ai,bi≦N
// ai≠bi
// 入力は全て整数である。
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N M
// a1 b1
// :
// aM bM
//
// 出力
// 答えをN行に出力せよ。
// i(1≦i≦N)行目には、都市iから他の都市に向けて、
// 何本の道路が伸びているかを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m; // LCOV_EXCL_BR_LINE
    vector<int> cnt(n, 0);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b; // LCOV_EXCL_BR_LINE
        cnt.at(--a)++;
        cnt.at(--b)++; 
    }
    rep(i, 0, n) cout << cnt.at(i) << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
