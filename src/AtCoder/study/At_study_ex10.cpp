// 問題文
// AさんとBさんのテストの点数 A,Bが与えられます。
// 2人の点数を表す横向きの棒グラフを出力してください。
// 棒グラフは1点を一つの]で表し、次の形式で出力します。
// A:Aさんの点数個の「]」
// B:Bさんの点数個の「]」
// 例えば、Aさんの点数が 5点、Bさんが 9点だった場合、次のように出力します。
// A:]]]]]
// B:]]]]]]]]]
// Bさんの棒グラフを出力した後にも改行が必要なことに注意してください。
// cout << endl;と書けば改行だけを出力することができます。 // LCOV_EXCL_BR_LINE
// 制約
// 0≦A,B≦20
// A,Bは整数

// 入力
// 入力は次の形式で標準入力から与えられます。
// A  B

// 出力
// A:Aさんの点数個の「]」
// B:Bさんの点数個の「]」
// 出力の最後には改行が必要です。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)\

int main() {
    ll a, b;
    cin >> a >> b; // LCOV_EXCL_BR_LINE
    cout << "A:"; // LCOV_EXCL_BR_LINE
    rep(i, a) {
        cout << "]"; // LCOV_EXCL_BR_LINE
    }
    cout << "\n"; // LCOV_EXCL_BR_LINE
    cout << "B:"; // LCOV_EXCL_BR_LINE
    rep(i, b) {
        cout << "]"; // LCOV_EXCL_BR_LINE
    }
    cout << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
