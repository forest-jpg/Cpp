// 問題文
// 上皿天秤は、左の皿に乗っているおもりの重さの合計を L とし、
// 右の皿に乗っているおもりの重さの合計を R としたとき、 
// L>R なら左に傾き、L=R なら釣り合い、L<R なら右に傾きます。

// 高橋君は、上皿天秤の左の皿に重さA のおもりと重さ B のおもりを、
// 右の皿に重さ C のおもりと重さ D のおもりを置きました。
// 天秤が左に傾くなら Left 釣り合うなら Balanced
// 右に傾くなら Right を出力してください。

// 制約
// 1≤A,B,C,D≤10
// 入力はすべて整数である

// 入力
// 入力は以下の形式で標準入力から与えられる。
// A B C D

// 出力
// 上皿天秤が左に傾くなら Left を、釣り合うなら Balanced を、
// 右に傾くなら Right を出力せよ。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int int_A, int_B, int_C, int_D;
    cin >> int_A >> int_B >> int_C >> int_D;
    
    int int_weight_left = int_A + int_B;
    int int_weight_right = int_C + int_D;
    string str_ans = "undefined";
    if (int_weight_left < int_weight_right) {
        str_ans = "Right";
    }
    else if (int_weight_left == int_weight_right) {
        str_ans = "Balanced";
    }
    else if (int_weight_left > int_weight_right) {
        str_ans = "Left";
    }
    else {
        // NoStatement
    }
    cout << str_ans << "\n";

    return 0;
}
