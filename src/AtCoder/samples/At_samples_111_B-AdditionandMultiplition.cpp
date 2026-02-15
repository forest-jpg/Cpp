// 問題文
// square1001 は、電光掲示板に整数 1 が表示されているのを見ました。
// 彼は、電光掲示板に対して、以下の操作 A, 操作 B をすることができます。
// 操作 A： 電光掲示板に表示する整数を「今の電光掲示板の整数を 2 倍にしたもの」に変える。
// 操作 B： 電光掲示板に表示する整数を「今の電光掲示板の整数に K を足したもの」に変える。
// square1001 は、操作 A, 操作 B 合計で N 回 行わなければなりません。 そのとき、
// N 回の操作後の、電光掲示板に書かれている整数として考えられる最小の値を求めなさい。

// 制約
// 1≤N,K≤10
// 入力はすべて整数である

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// K

// 出力
// square1001 が N 回操作を行った後の、
// 電光掲示板に書かれている整数として考えられる最小値を出力しなさい。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define INF INT_MAX/2

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // LCOV_EXCL_BR_LINE
    /* 一番スマート */
    int N, K;
    cin >> N >> K; // LCOV_EXCL_BR_LINE
    int res = 1;
    for (int i = 0; i < N; i++) {
        res = min(res * 2, res + K);
    }
    cout << res << endl; // LCOV_EXCL_BR_LINE
    /* queueを使った解法 */
    // int N, K;
    // cin >> N >> K; // LCOV_EXCL_BR_LINE
    // queue<int> que;
    // que.push(1);
 
    // rep(i, N) {
    //     queue<int> q;
 
    //     while (!que.empty()) {
    //         int x = que.front(); que.pop();
    //         q.push(x * 2);
    //         q.push(x + K);
    //     }
 
    //     swap(que, q);
    // }
 
    // int ans = INF;
    // while (!que.empty()) {
    //     int x = que.front(); que.pop();
    //     ans = min(ans, x);
    // }
    // cout << ans << endl; // LCOV_EXCL_BR_LINE
    // int N, K;
    // cin >> N >> K; // LCOV_EXCL_BR_LINE
    // vector<ll> ans(1030, 1024);

    /* 自分の回答 */
    // rep(i, (1 << N)){
    //     int sum = 1;
    //     rep(j, N) {
    //         if ((i + 1) & (1 << j)) sum = sum << 1;
    //         else sum += K;
    //     }
    //     ans[i] = sum;
    // }

    // cout << *min_element(ans.begin(), ans.end()) << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
