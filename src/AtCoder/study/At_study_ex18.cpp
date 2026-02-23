// 問題文
// あるゲーム大会には N 人が参加し M 試合が行われました。
// 各参加者には 1 から N の番号が割り当てられています。

// 試合に関する情報が与えられるので、M 回の試合がすべて終了した時点での
// 試合結果の表を作成し、出力してください。
// ただし、同じ参加者のペアについて 2 回以上試合が行われることはないとします。

// 制約
// 1 ≤ N ≤ 100
// 0 ≤ M ≤ 4950
// 1 ≤ A_i, B_i ≤ N (1 ≤ i ≤ M)
// A_i ≠ B_i (1 ≤ i ≤ M)
// 同じ参加者のペアで 2 回以上試合が行われることはない
// 入力はすべて整数

// 入力
// N M
// A_1 B_1
// A_2 B_2
// A_3 B_3
// : :
// A_M B_M

// 出力
// M 試合が終了した時点での試合結果の表を出力してください。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    enum PairIdx{
        PAIR_WIN = 0,
        PAIR_LOSE,
        PAIR_MAX_NUM,
    };
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(PAIR_MAX_NUM));
    rep(i, 0, m) cin >> a.at(i).at(PAIR_WIN) >> a.at(i).at(PAIR_LOSE);
    rep(i, 0, m)rep(j, 0, PAIR_MAX_NUM) a.at(i).at(j)--;    // 0-index変換

    vector<vector<char>> r(n, vector<char>(n, '-'));
    rep(i, 0, m) {
        r.at(a.at(i).at(PAIR_WIN)).at(a.at(i).at(PAIR_LOSE)) = 'o';
        r.at(a.at(i).at(PAIR_LOSE)).at(a.at(i).at(PAIR_WIN)) = 'x';
    }
    rep(i, 0, n) {
        rep(j, 0, n - 1) {
            cout << r.at(i).at(j) << " ";
        }
        cout << r.at(i).at(n-1) << "\n";
    }

    return 0;
}
