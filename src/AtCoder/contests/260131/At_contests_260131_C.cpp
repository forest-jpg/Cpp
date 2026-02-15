// 問題文
// AtCoder 社は時刻 0 に始業し時刻 T に終業します。
// 時刻 t と時刻 t+1 との間隔は 1 秒です。
// 高橋君は AtCoder 社の業務時間中に SNS の chokutter を以下の規則で見ます。
//
// 1. 始業と同時に chokutter を開く。
// 2. 青木君が高橋君のデスクの後ろを通りかかった瞬間に chokutter を開いていた場合、
//    直ちに chokutter を閉じる。
// 3. 高橋君は、chokutter を時刻 t に閉じると、時刻 t+100 に必ず chokutter を開く。
//
// 始業から終業までに N 回青木君が高橋君のデスクの後ろを通りかかっており、
// そのうち i 回目は時刻 A_i でした。
//
// 始業から終業までに、高橋君は合計で何秒 chokutter を見ていましたか？
// なお、高橋君が chokutter を開いた瞬間に青木君がデスクの後ろを通りかかることはありませんでした。
//
// 制約
// - 入力は全て整数
// - 0 ≤ N ≤ 3×10^5
// - 1 ≤ A_1 < A_2 < ... < A_N ≤ T ≤ 10^9
// - 高橋君が chokutter を開いた瞬間に青木君がデスクの後ろを通りかかることはない
//
// 入力形式
// N T
// A_1 A_2 ... A_N
//
// 出力
// 答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    int N;
    ll T, sum = 0;
    cin >> N >> T; // LCOV_EXCL_BR_LINE
    vector<ll> A(N + 1, 0);
    rep(i, 1, N + 1) {
        ll t;
        cin >> t; // LCOV_EXCL_BR_LINE
        A[i] = t;
    }
    // sum[0] = A[0];
    ll remain = 0;
    rep(i, 0, N) {
        if ((!remain && A[i + 1] - A[i] > 100) ||
            (remain && A[i + 1] - remain > 100)) {
            // sum[i + 1] = sum[i] + A[i + 1] - 100;
            sum += 100;
            remain = 0;
        }
        else if(!remain){
            remain = A[i];
        }
    }
    cout << T - sum << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}