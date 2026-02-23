// 問題文
// 縦 H マス、横 W マスのマス目があります。上から i 行目 (1≤i≤H)、左から j 列目 (1≤j≤W) のマスをマス (i,j) と呼ぶことにします。

// それぞれのマスは白もしくは黒のどちらか 1 色で塗られています。
// マスに塗られている色は H 個の文字列 S_1, S_2, …, S_H で表され、
// S_i (1≤i≤H) の j 文字目 (1≤j≤W) が . のとき、マス (i,j) は白で塗られており、
// S_i (1≤i≤H) の j 文字目 (1≤j≤W) が # のとき、マス (i,j) は黒で塗られています。

// マス目が以下の条件を満たすか判定してください。

// どの黒で塗られたマスについても、上下左右で隣り合うマスのうち黒く塗られているものは 2 つもしくは 4 つである。
// ただし、マス (i,j) (1≤i≤H,1≤j≤W) とマス (k,l) (1≤k≤H,1≤l≤W) は、
// |i−k|+|j−l|=1 であるとき、かつそのときに限り上下左右で隣り合っているとします。

// 制約
// 1≤H≤20
// 1≤W≤20
// H, W は整数
// S_i は . および # からなる長さ W の文字列 (1≤i≤H)

// 入力
// H W
// S_1
// S_2
// ⋮
// S_H

// 出力
// 与えられたマス目が条件を満たしているとき Yes を、条件を満たしていないとき No を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int  h, w;
    cin >> h >> w;

    vector<string> s(h+2);
    rep(i, 1, h+1) cin >> s.at(i);

    bool ok = true;
    rep(i, 1, h+1)rep(j, 0, w){
        if (s.at(i)[j] == '#') {
            int cnt = 0;
            if (j > 0 && s.at(i)[j-1] == '#') cnt++;
            if (j < w-1 && s.at(i)[j+1] == '#') cnt++;
            if (s.at(i-1)[j] == '#') cnt++;
            if (s.at(i+1)[j] == '#') cnt++;
            if (cnt != 2 && cnt != 4) ok = false; 
        }
    }

    cout << ((ok) ? "Yes" : "No") << "\n";


    return 0;
}