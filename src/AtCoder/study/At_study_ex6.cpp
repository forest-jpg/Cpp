// 問題文
// 1行の計算式が与えられるので、その結果を出力してください。
// 与えられる計算式のパターンと対応する出力は以下の表の通りです。

// 入力	出力	備考
// A + B A+Bの計算結果を出力	
// A - B A−Bの計算結果を出力	
// A * B A×Bの計算結果を出力	
// A / B  A÷Bの計算結果を出力	小数点以下は切り捨てて出力
// Bが0の場合はerrorと出力
// A ? B	errorと出力	
// A = B	errorと出力	
// A ! B	errorと出力	

// 制約
// 0≦A,B≦100
// A,Bは整数 opは +, −, ∗, /, ?, =, ! のいずれか一つ

// 入力
// 入力は次の形式で標準入力から与えられます。
// A op B

// 出力
// 入力の計算式の計算結果を出力してください。 
// 出力の最後には改行が必要です。
#include <bits/stdc++.h>
using namespace std;

int main() {
  int int_A, int_B;
  string op;
  cin >> int_A >> op >> int_B; // LCOV_EXCL_BR_LINE
  int int_rtn;
  bool bl_err_flg = false;
  if (op == "+") {
    int_rtn = int_A + int_B;
  }
  else if (op == "-") {
    int_rtn = int_A - int_B;
  }
  else if (op == "*") {
    int_rtn = int_A * int_B;
  }
  else if (op == "/") {
    if (int_B == 0) {
      bl_err_flg = true;
    }
    else {
      int_rtn = int_A / int_B;
    }
  }
  else if (op == "?" || op == "=" || op == "!") {
    bl_err_flg = true;
  }
  else {
    bl_err_flg = true;
  }

  if (bl_err_flg) {
    cout << "error" << "\n"; // LCOV_EXCL_BR_LINE
  }
  else {
    cout << int_rtn << endl; // LCOV_EXCL_BR_LINE
  }
  
  return 0;
}
