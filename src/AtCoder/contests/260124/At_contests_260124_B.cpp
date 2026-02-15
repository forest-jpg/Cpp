// 問題文
// 高橋君は音楽プレイヤーを持っています。
// はじめ、音量は 0 であり、曲は停止中です。
// これから、Q 回の操作を順に行います。
// i 回目の操作は整数 Aiによって表され、操作の内容は以下の通りです。
// Ai=1 のとき、音量を1 上げる。
// Ai=2 のとき、現在の音量が 1 以上であれば音量を1 下げ、0 であれば何もしない。
// Ai=3 のとき、曲が停止中であれば曲を再生し、曲が再生中であれば曲を停止する。
// i=1,2,…,Q に対して、以下の問題を解いてください。
// i 回目の操作を終えた直後に音量 3 以上で音楽が再生されているか判定せよ。

// 制約
// 1≤Q≤2×10^5
// Ai∈{1,2,3}
// 入力される値はすべて整数

// 入力
// 入力は以下の形式で標準入力から与えられる。

// Q
// A1
// ​A2
// ⋮
// AQ
 
// 出力
// Q 行出力せよ。
// i 行目には、
// i 回目の操作を終えた直後に音量 
// 3 以上で音楽が再生されているならば Yes を、そうでないならば No を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    ll Q, volume = 0;
    bool is_play = false;
    int A[200005];

    cin >> Q; // LCOV_EXCL_BR_LINE
    rep(i, Q) {
        cin >> A[i]; // LCOV_EXCL_BR_LINE
    }
    rep(i, Q) {
        switch (A[i]) {
            case 1:
                volume++;
                break;
            case 2:
                if (volume > 0) volume--;
                break;
            case 3:
                is_play ^= 1;
                break;
        }
        ((volume >= 3) && is_play) ? (cout << "Yes") : (cout << "No"); // LCOV_EXCL_BR_LINE
        cout << "\n"; // LCOV_EXCL_BR_LINE
    }

    return 0;
}
