// 問題文
// あるスポーツ大会は西暦年を 4 で割った余りが 2 である年の 6 月に開催されます。
// 現在が西暦 Y 年の 1 月である時、このスポーツ大会が次に開催されるのは西暦何年になるかを求めてください。
//
// 制約
// 2000 ≤ Y ≤ 3000
// Y は整数
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
//
// Y
//
// 出力
// 答えを出力せよ。
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int Y;
    cin >> Y;

    int div = Y % 4;
    int ans;
    switch(div) {
        case 0:
            ans = Y + 2;
            break;
        case 1:
            ans = Y + 1;
            break;
        case 2:
            ans = Y;
            break;
        case 3:
            ans = Y + 3;
            break;
    }
    cout << ans << "\n";

    return 0;
}