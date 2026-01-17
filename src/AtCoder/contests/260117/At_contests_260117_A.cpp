// 問題文
// 10^100 行 10^100 列のマス目があります。
// 以下では、上から i 行目かつ左から j 列目のマスを
// マス (i,j) と表します。
// マス目のうち、マス (P,Q) を一番左上のマスとした 
// 100×100 マスの領域のみが黒く塗られており、それ以外のマスは白く塗られています。
// マス (X,Y) が黒く塗られているか判定してください。

// 制約
// 1≤P,Q,X,Y≤10000
// P,Q,X,Y は整数

// 入力
// 入力は以下の形式で標準入力から与えられる。
// P Q
// X Y

// 出力
// マス (X,Y) が黒く塗られているならば Yes を、そうでないならば No を出力せよ。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int int_P, int_Q, int_X, int_Y;

    cin >> int_P >> int_Q >> int_X >> int_Y;

    string str_ans = "No";
    if ((int_P <= int_X) && (int_X <= (int_P + 99))) {
        if ((int_Q <= int_Y) && (int_Y <= (int_Q + 99))) {
            str_ans = "Yes";
        }
    }
    cout << str_ans << "\n";

    return 0;
}
