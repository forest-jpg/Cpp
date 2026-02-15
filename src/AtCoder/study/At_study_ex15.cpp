// 問題文
// 三人兄弟のA君とB君とC君は、お父さんに1つのプレゼントを貰うことになりました。
// 貰えるプレゼントの予算は「テストの合計点の積」で決まります。
//
// 三人兄弟はそれぞれN個のテストを受けました。
// A君とB君とC君の「i番目のテストの点数」をそれぞれA_i, B_i, C_iで表すと、
// プレゼントの予算は次の式で求まります。
// プレゼントの予算 = 
//      (A_1 + A_2 + ... + A_N) × (B_1 + B_2 + ... + B_N) × (C_1 + C_2 + ... + C_N)
//
// 例えば、2個のテストを受けた結果、A君は5点と7点、B君は4点と10点、
// C君は9点と2点だったとします。
// この場合、(5+7) × (4+10) × (9+2) = 12 × 14 × 11 = 1848から、
// プレゼントの予算は1848円になります。
//
// 制約
// 1 ≦ N ≦ 10
// 0 ≦ A_i, B_i, C_i ≦ 100
// N, A_i, B_i, C_i は整数
//
// 入力
// N
// A_1 A_2 ... A_N
// B_1 B_2 ... B_N
// C_1 C_2 ... C_N
//
// 出力
// プレゼントの予算を出力してください。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

// 1人のテストの点数を表す配列から合計点を計算して返す関数
// 引数 scores: scores.at(i)にi番目のテストの点数が入っている
// 返り値: 1人のテストの合計点
int sum(vector<int> scores) {
  // ここにプログラムを追記
  int ans = 0;
  rep(i, 0, scores.size()) ans += scores.at(i);

  return ans;
}
 
// 3人の合計点からプレゼントの予算を計算して出力する関数
// 引数 sum_a: A君のテストの合計点
// 引数 sum_b: B君のテストの合計点
// 引数 sum_c: C君のテストの合計点
// 返り値: なし
void output(int sum_a, int sum_b, int sum_c) {
  // ここにプログラムを追記
  cout << (sum_a * sum_b * sum_c) << "\n"; // LCOV_EXCL_BR_LINE
}
 
// -------------------
// ここから先は変更しない
// -------------------
 
// N個の入力を受け取って配列に入れて返す関数
// 引数 N: 入力を受け取る個数
// 返り値: 受け取ったN個の入力の配列
vector<int> input(int N) {
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i); // LCOV_EXCL_BR_LINE
  }
  return vec;
}
 
int main() {
  // 科目の数Nを受け取る
  int N;
  cin >> N; // LCOV_EXCL_BR_LINE
  // それぞれのテストの点数を受け取る
  vector<int> A = input(N);
  vector<int> B = input(N);
  vector<int> C = input(N);
 
  // それぞれの合計点を計算
  int sum_A = sum(A);
  int sum_B = sum(B);
  int sum_C = sum(C);
 
  // プレゼントの予算を出力
  output(sum_A, sum_B, sum_C);

  return 0;
}
