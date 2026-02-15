// 問題文
// 電卓の操作が与えられるので、計算途中の値と計算結果の値を出力してください。

// 入力	出力	備考
// +B	+Bの計算結果を出力する。	
// -B	−Bの計算結果を出力する。	
// *B	×Bの計算結果を出力する。	
// /B	÷Bの計算結果を出力する。	小数点以下は切り捨てて出力する。
// Bが0の場合はerrorと出力し、それ以降は出力を行わない。
// ÷Bにおいて、Bが0の場合はerrorと出力し、それ以降は出力を行わない ことに注意してください。

// 制約
// 0≦N≦7
// 0≦A,Bi≦10
// A,Bi,Nは整数
// opi は +,−,∗,/ のいずれか一つ

// 入力
// 入力は次の形式で標準入力から与えられます。
// N
// A
// op1 B1
// op2 B2​
// ⋮
// opN BN
 
// 出力
// 1:1個目の計算結果
// 2:2個目の計算結果
// ⋮
// N:N個目の計算結果
// 出力の最後には改行が必要です。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)\

int main() {
    ll N, A;

    cin >> N >> A; // LCOV_EXCL_BR_LINE
    string op_tmp;
    vector<string> op;
    ll B_tmp;
    vector<ll> B,ans;
    rep(i, N) {
        cin >> op_tmp >> B_tmp; // LCOV_EXCL_BR_LINE
        op.push_back(op_tmp);
        B.push_back(B_tmp);
    }
    rep(i, N) {
        if (op[i] == "+") A += B[i];
        else if (op[i] == "-") A -= B[i];
        else if (op[i] == "*") A *= B[i];
        else if (op[i] == "/") {
            if (B[i] == 0){
                cout << "error" << "\n"; // LCOV_EXCL_BR_LINE
                break;
            }
            else {
                A /= B[i];
            }
        }
        cout << (i + 1) << ":" << A << "\n"; // LCOV_EXCL_BR_LINE
    }

    return 0;
}
