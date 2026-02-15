// 問題文
// 日本でよく使われる紙幣は、10000円札、5000円札、1000円札です。
// 以下、「お札」とはこれらのみを指します。
//
// 青橋くんが言うには、彼が祖父から受け取ったお年玉袋には
// お札が N 枚入っていて、合計で Y 円だったそうですが、嘘かもしれません。
// このような状況がありうるか判定し、ありうる場合は
// お年玉袋の中身の候補を一つ見つけてください。
// なお、彼の祖父は十分裕福であり、お年玉袋は十分大きかったものとします。
//
// 制約
// - 1≤N≤2000
// - 1000≤Y≤2×10^7
// - N は整数である。
// - Y は 1000 の倍数である。
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// Y
//
// 出力
// N 枚のお札の合計金額が Y 円となることがありえない場合は、
// -1 -1 -1 と出力せよ。
//
// N 枚のお札の合計金額が Y 円となることがありうる場合は、
// そのような N 枚のお札の組み合わせの一例を
// 「10000円札 x枚、5000円札 y枚、1000円札 z枚」として、
// x、y、z を空白で区切って出力せよ。
// 複数の可能性が考えられるときは、そのうちどれを出力してもよい。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    const vector<int> kind = {10000, 5000, 1000};
    const int KIND_NUM = kind.size();

    int n, y;
    cin >> n >> y; // LCOV_EXCL_BR_LINE
    /* 実行スピードが心配 */
    vector<int> ans(KIND_NUM, -1);
    rep(i, 0, n + 1) rep(j, 0, n - i + 1) {
        int k = n - i - j;
        int total = kind.at(0)*i + kind.at(1)*j + kind.at(2)*k;
        if (total == y) {
            ans.at(0) = i;
            ans.at(1) = j;
            ans.at(2) = k;
        }
    }

    /* ▼▼▼ 合計枚数がN以下だとダメなので没案 ▼▼▼ */
    // vector<int> tmp(KIND_NUM, -1);
    // int remain_y = y;
    // int remain_cnt = n;
    // rep(i, 0, KIND_NUM) {
    //     tmp.at(i) = (remain_y / kind[i]);
    //     if (tmp.at(i) > remain_cnt) {
    //         rep(j, 0, KIND_NUM) ans.at(j) = -1;
    //         break;
    //     } else {
    //         ans.at(i) = tmp.at(i);
    //         remain_y -= kind[i] * tmp.at(i);
    //         remain_cnt -= tmp.at(i);
    //         if (remain_y == 0) break;
    //     }
    // }
    /* ▲▲▲ 合計枚数がN以下だとダメなので没案 ▲▲▲ */
    
    rep(i, 0, KIND_NUM - 1) cout << ans.at(i) << " "; // LCOV_EXCL_BR_LINE
    cout << ans.at(KIND_NUM - 1) << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}