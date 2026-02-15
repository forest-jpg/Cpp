// 問題文
// joisinoお姉ちゃんは、劇場の受付を担当しています。
// この劇場には、席1から席100000までの、100000個の席があります。
// 彼女のメモ書きによると、今までの間にN組の団体が来て、
// i組目の団体は席l_iから席r_iまでの連続した席に座っています。
// 今、劇場の席には何人座っているか求めてください。

// 制約
// - 1 ≦ N ≦ 1000
// - 1 ≦ l_i ≦ r_i ≦ 100000
// - 同じ席に複数の人が座ることはない
// - 入力はすべて整数

// 入力
// N
// l_1 r_1
// l_2 r_2
// ...
// l_N r_N

// 出力
// 劇場の席に座っている人数
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // LCOV_EXCL_BR_LINE
    /* setを使った解放 */
    ll N;
    cin >> N; // LCOV_EXCL_BR_LINE
    ll sum = 0;

    rep(i, N) {
        ll l, r;
        cin >> l >> r; // LCOV_EXCL_BR_LINE
        sum += (r - l + 1);
    }
    cout << sum << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
