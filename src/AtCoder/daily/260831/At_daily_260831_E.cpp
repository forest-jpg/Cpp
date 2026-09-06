// 問題文
// N 本の導火線を一直線に接着したものがあります。
// 左から i 本目の導火線は長さ A_i cm で、1 秒あたり B_i cm の一定の速さで燃えます。
//
// この導火線の左端と右端から同時に火をつけるとき、
// 2 つの火がぶつかる場所が、着火前の導火線の左端から何 cm の地点か求めてください。
//
// 制約
// 1 <= N <= 10^5
// 1 <= A_i, B_i <= 1000
// 入力は全て整数
//
// 入力
// N
// A_1 B_1
// A_2 B_2
// ...
// A_N B_N
//
// 出力
// 2 つの火がぶつかる場所が、着火前の導火線の左端から何 cm の地点か（単位を除いて）出力せよ。
//
// 想定解答との絶対誤差または相対誤差が 1e-5 以下であれば正解として扱われる。
#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    rep(i, 0, N) cin >> A[i] >> B[i];
    double burn_time = 0.0;
    rep(i, 0, N) burn_time += static_cast<double>(A[i]) / static_cast<double>(B[i]);
    burn_time /= 2.0;

    double burn_len = 0.0;
    for (int i = 0; i < N; i++) {
        double t = static_cast<double>(A[i]) / static_cast<double>(B[i]);
        if (burn_time <= t) {
            burn_len += static_cast<double>(B[i]) * burn_time;
            break;
        } else {
            burn_len += A[i];
            burn_time -= t;
        }
    }
    cout << fixed << setprecision(15);
    cout << burn_len << "\n";

    return 0;
}