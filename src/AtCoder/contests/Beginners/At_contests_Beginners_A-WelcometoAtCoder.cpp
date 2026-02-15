// 問題文
// 高橋君はデータの加工が行いたいです。

// 整数 a, b, c と、文字列 s が与えられます。
// a+b+c の計算結果と、文字列 s を並べて表示しなさい。

// 制約
// 1 ≤ a, b, c ≤ 1,000
// 1 ≤ |s| ≤ 100

// 入力
// 入力は以下の形式で与えられる。
// a
// b
// c
// s

// 出力
// a+b+c と s を空白区切りで 1 行に出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    int a, b, c;
    cin >> a >> b >> c; // LCOV_EXCL_BR_LINE
    string s;
    cin >> s; // LCOV_EXCL_BR_LINE
    cout << (a + b + c) << " " << s << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}