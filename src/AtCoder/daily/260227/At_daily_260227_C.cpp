// 問題文
// 0 と 1 からなる長さ 64 の数列 A=(A_0, A_1, …, A_63) が与えられます。
// A_0 * 2^0 + A_1 * 2^1 + ⋯ + A_63 * 2^63 を求めてください。

// 制約
// A_i は 0 または 1

// 入力
// 入力は以下の形式で標準入力から与えられる。
// A_0 A_1 … A_63

// 出力
// 答えを整数として出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    #define INPUT_LEN (64u)
    vector<ll> a(INPUT_LEN);
    rep(i, 0, INPUT_LEN) cin >> a.at(i);

    ll ans = 0;
    rep(i, 0, INPUT_LEN) {
        ans += a.at(i) * ll(ll(1) << i);
    }

    cout << ans << "\n";

    return 0;
}