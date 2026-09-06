// 問題文
// A, B, C の三兄弟がいます。この 3 人の年齢関係は、
// 3 つの文字 S_AB, S_AC, S_BC によって与えられ、それぞれ以下を意味します。
//
// S_AB が < の場合 A は B より年下であり、> の場合 A は B より年上である。
// S_AC が < の場合 A は C より年下であり、> の場合 A は C より年上である。
// S_BC が < の場合 B は C より年下であり、> の場合 B は C より年上である。
// 
// 三兄弟の次男、つまり二番目に年上の人は誰ですか？
//
// 制約
// S_AB, S_AC, S_BC はそれぞれ < または >
// 入力に矛盾は含まれない。つまり、与えられた大小関係を全て満たす年齢関係が必ず存在する入力のみが与えられる。
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// S_AB S_AC S_BC
//
// 出力
// 三兄弟の次男、つまり二番目に年上の人の名前を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    char S[3];
    rep(i,0,3) cin >> S[i];

    int A = 0, B = 0, C = 0;
    if (S[0] == '<') B++;
    else A++;
    if (S[1] == '<') C++;
    else A++;
    if (S[2] == '<') C++;
    else B++;
    if (A == 1) cout << 'A' << "\n";
    if (B == 1) cout << 'B' << "\n";
    if (C == 1) cout << 'C' << "\n";

    // char ans;
    // if (S[0] == '<') {
    //     if (S[2] == '<') ans = 'B';
    //     else if (S[1] == '<') ans = 'C';
    //     else ans = 'A';
    // } else {
    //     if (S[2] == '>') ans = 'B';
    //     else if (S[1] == '>') ans = 'C';
    //     else ans = 'A';
    // }
    // cout << ans << "\n";

    return 0;
}