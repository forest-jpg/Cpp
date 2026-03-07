// 問題文
// 文字列 S が与えられます。
// S の中に A, B, C がこの順に等間隔に並んでいる場所が何箇所あるか求めてください。
//
// 厳密には、3 つの整数の組 (i,j,k) であって、以下の条件をすべて満たすものの個数を
// 求めてください。ここで、|S| で S の長さを、S_x で S の x 文字目を表すものとします。
//
// 1 ≤ i < j < k ≤ |S|
// j - i = k - j
// S_i = A
// S_j = B
// S_k = C
//
// 制約
// S は英大文字からなる長さ 3 以上 100 以下の文字列
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// S
//
// 出力
// 答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    string S;
    cin >> S;

    int s_len = S.size(), s_center = s_len / 2;
    int ans = 0;
    rep(i, 0, s_len) {
        if (S.at(i) == 'B') {
            if (i < s_center) {
                rep(j, 0, i) if (S.at(j) == 'A' && S.at(i + (i-j)) == 'C') ans++;
            } else {
                rep(j, i+1, s_len) if (S.at(j) == 'C' && S.at(i - (j-i)) == 'A') ans++;
            }
        }
    }
    cout << ans << "\n";

    return 0;
}