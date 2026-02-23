// 問題文
// 5つの要素からなる配列が与えられます。
// 同じ値の要素が隣り合っているような箇所が存在するかどうかを判定してください。
// 存在するなら"YES"を、存在しなければ"NO"を出力してください。

// 制約
// 0≦A_i≦100(1≦i≦5)
// A_i(1≦i≦5)は整数

// 入力
// 入力は次の形式で標準入力から与えられます。
// A_1
// A_2
// A_3
// A_4
// A_5

// 出力
// 配列の隣り合う要素のうち、値が等しいものが存在するなら"YES"を、
// 存在しなければ"NO"を出力してください。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    #define INPUT_NUM (5u)
    vector<int> a(INPUT_NUM, 0);
    rep(i, 0, INPUT_NUM) cin >> a.at(i);

    bool found = false;
    rep(i, 0, INPUT_NUM - 1) if (a.at(i + 1) == a.at(i)) found = true;

    cout << (found ? "YES" : "NO") << "\n";

    return 0;
}
