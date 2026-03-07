// 問題文
// 高橋君は野球をモチーフにしたゲームを作ろうとしましたが、うまくコードが書けなくて困っています。
// 高橋君の代わりに次の問題を解くプログラムを作ってください。

// マス 0, マス 1, マス 2, マス 3 の 4 つのマス目があります。
// はじめマスの上には何もありません。
// また、整数 P があり、はじめ P=0 です。
// 正の整数からなる数列 A=(A_1, A_2, …, A_N) が与えられるので、
// i=1,2,…,N について順番に次の操作を行います。

// 1. マス 0 に駒を 1 個置く。
// 2. マス上のすべての駒を番号が A_i 大きいマスに進める。
//    言い換えると、駒がマス x にあればその駒をマス x+A_i に移動する。
//    ただし移動先のマスが存在しない (すなわち x+A_i が 4 以上になる)
//    駒たちに関しては、それらを取り除いて P に取り除いた個数を加算する。

// すべての操作を行った後の P の値を出力してください。

// 制約
// 1≤N≤100
// 1≤A_i≤4
// 入力される値はすべて整数

// 入力
// N
// A_1 A_2 … A_N

// 出力
// 操作終了時点での P の値を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, 0, N) cin >> A.at(i);

    vector<int> runner;
    int P = 0;
    rep(i, 0, N) {
        runner.push_back(0);
        rep(j, 0, runner.size()) {
            runner.at(j) += A.at(i);
            if (runner.at(j) >= 4 ) {
                P++;
                runner.erase(runner.begin() + j);
                j--;
            }
            if (j == runner.size()-1) break;
        }
    }

    cout << P << "\n";

    return 0;
}