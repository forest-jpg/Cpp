// 問題文
// 英小文字 a, b, …, z の ASCII 文字コードはこの順に 97,98,…,122 です。
// 97 以上 122 以下の整数 N が与えられるので、ASCII 文字コードが N であるような英小文字を出力してください。

// 制約
// N は 97 以上 122 以下の整数

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N

// 出力
// 答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    cout << char(N) << "\n";

    return 0;
}