// 問題文
// 正整数 D が与えられます。

// 直径が D の円の面積を求めて下さい。

// 制約
// 1≤D≤100
// 入力される値は整数

// 入力
// 入力は以下の形式で標準入力から与えられる。

// D

// 出力
// 答えを出力せよ。

// 真の解との絶対誤差または相対誤差が 10^{-6} 以下のとき正解と判定される。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() { 
    double D;
    cin >> D;
    double PI = numbers::pi; 
    
    
    cout << fixed << setprecision(12) << (D/2)*(D/2)*PI << "\n";
    
    return 0;
}