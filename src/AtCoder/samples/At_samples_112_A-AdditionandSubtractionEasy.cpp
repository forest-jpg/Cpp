// 問題文
// joisinoお姉ちゃんは、A op B という式の値を計算したいと思っています。
// ここで、A, B は整数で、op は、+ または - の記号です。
// あなたの仕事は、joisinoお姉ちゃんの代わりにこれを求めるプログラムを作ることです。

// 制約
// 1 ≦ A, B ≦ 10^9
// op は、+ または - の記号である。

// 入力
// 入力は以下の形式で標準入力から与えられる。
// A op B

// 出力
// 式の値を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll A, B;
    char op;
    cin >> A >> op >> B;
    
    ll ans = 0;
    if (op == '+') ans = A + B;
    else if (op == '-') ans = A - B;
    cout << ans << "\n";

    return 0;
}
