// 2次元の累積和(2)
// H * W のマス目があり、N日間雪が降り続ける。
// t日目には(At, Bt)を左上とし、(Ct, Dt)を右下とする長方形領域に雪が降る。
// 最終的な各マスへの積雪量を出力せよ
// 制約
// H, Wは1以上1500以下の整数
// Nは1以上100000以下の整数
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    vector<int> A(N, 0), B(N, 0), C(N, 0), D(N, 0);
    rep(i, 0, N) cin >> A[i] >> B[i] >> C[i] >> D[i];

    vector<vector<int>> delta(H+2, vector<int>(W+2, 0));
    rep(i, 0, N) {
        delta[A[i]][B[i]]++;
        delta[A[i]][D[i]+1]--;
        delta[C[i]+1][B[i]]--;
        delta[C[i]+1][D[i]+1]++;
    }
    rep(i, 1, H+1) rep(j, 1, W+1) delta[i][j] = delta[i-1][j] + delta[i][j];
    rep(i, 1, H+1) rep(j, 1, W+1) delta[i][j] = delta[i][j-1] + delta[i][j];

    rep(i, 1, H+1) {
        rep(j, 1, W+1) cout << delta[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
