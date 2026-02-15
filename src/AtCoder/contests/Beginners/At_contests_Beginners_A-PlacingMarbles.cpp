// 問題文
// すぬけ君は 1, 2, 3 の番号がついた 3 つのマスからなるマス目を持っています。
// 各マスには 0 か 1 が書かれており、マス i には s_i が書かれています。
//
// すぬけ君は 1 が書かれたマスにビー玉を置きます。
// ビー玉が置かれるマスがいくつあるか求めてください。
//
// 制約
// s_1, s_2, s_3 は 1 あるいは 0
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// s_1 s_2 s_3
//
// 出力
// 答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    #define N (3u)
    
    string s;
    cin >> s; // LCOV_EXCL_BR_LINE
    int ans = 0;
    rep(i, 0, N) if (s.at(i) == '1') ans++;
    
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}