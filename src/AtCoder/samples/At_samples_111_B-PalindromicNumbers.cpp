// 問題文
// A 以上 B 以下の整数のうち、回文数となるものの個数を求めてください。 
// ただし、回文数とは、先頭に 0 をつけない10 進表記を文字列として見たとき、
// 前から読んでも後ろから読んでも同じ文字列となるような正の整数のことを指します。

// 制約
// 10000≤A≤B≤99999
// 入力はすべて整数である

// 入力
// 入力は以下の形式で標準入力から与えられる。
// A B

// 出力
// A 以上 B 以下の整数のうち、回文数となるものの個数を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define INF INT_MAX/2

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /* 入力 */
    int A, B;
    cin >> A >> B;

    int kai[100005] = {};
    /* 回文数を表現 */
    rep(i, 1, 10) {
        rep(j, 0, 10) {
            rep(k, 0, 10) kai[10000*i + 1000*j + 100*k + 10*j + i] = 1; 
        }
    }
    ll cnt = count(begin(kai)+A, begin(kai)+B+1, 1);
    cout << cnt << "\n";

    return 0;
}
