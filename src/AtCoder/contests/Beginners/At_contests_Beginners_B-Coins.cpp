// 問題文
// あなたは、500 円玉を A 枚、100 円玉を B 枚、50 円玉を C 枚持っています。
// これらの硬貨の中から何枚かを選び、合計金額をちょうど X 円にする方法は何通りありますか。
//
// 同じ種類の硬貨どうしは区別できません。2 通りの硬貨の選び方は、
// ある種類の硬貨についてその硬貨を選ぶ枚数が異なるとき区別されます。
//
// 制約
// 0≤A,B,C≤50
// A+B+C≥1
// 50≤X≤20,000
// A,B,C は整数である
// X は 50 の倍数である
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// A
// B
// C
// X
//
// 出力
// 硬貨を選ぶ方法の個数を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x; // LCOV_EXCL_BR_LINE
    int ans = 0;
    rep(i, 0, a + 1) {
        int t_500 = 500 * i;
        rep(j, 0, b + 1) {
            int t_100 = 100 * j;
            rep(k, 0, c + 1) {
                if ((t_500 + t_100 + 50 * k) == x) {
                    ans++;
                } 
            }
        }
    }
   
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}