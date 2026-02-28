// 問題文
// この問題における 11/22 文字列の定義は A 問題および E 問題と同じです。

// 文字列 T が以下の条件を全て満たすとき、T を 11/22 文字列 と呼びます。
// 1. |T| は奇数である。ここで、|T| は T の長さを表す。
// 2. 1 文字目から 2^(|T|+1)/2 - 1 文字目までが 1 である。
// 3. 2^(|T|+1)/2 文字目が / である。
// 4. 2^(|T|+1)/2 + 1 文字目から |T| 文字目までが 2 である。

// 例えば 11/22, 111/222, / は 11/22 文字列ですが、
// 1122, 1/22, 11/2222, 22/11, //2/2/211 はそうではありません。

// 1, 2, / からなる長さ N の文字列 S が与えられます。
// S は / を 1 個以上含みます。
// 11/22 文字列であるような S の(連続な)部分文字列の長さの最大値を求めてください。

// 制約
// - 1 ≤ N ≤ 2×10^5
// - S は 1, 2, / からなる長さ N の文字列
// - S は / を 1 個以上含む

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// S

// 出力
// 11/22 文字列であるような S の(連続な)部分文字列の長さの最大値を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    typedef enum{
        ONE = 0,
        TWO
    } STATE;

    int N;
    cin >> N;
    string S;
    cin >> S;

    STATE state = ONE;
    int cnt = 0, max_len = 0, cnt_two = 0;
    rep(i, 0, N) {
        switch(state) {
            case ONE:
                if (S.at(i) == '1') cnt++;
                else if (S.at(i) == '/') state = TWO;
                else cnt = 0;
                break;
            case TWO:
                if ((S.at(i) == '2')) {
                    cnt_two++;
                    int tmp = min(cnt, cnt_two);
                    if (tmp > max_len) max_len = tmp;
                }
                else {
                    if (S.at(i) == '1') cnt = 1;
                    else cnt = 0;
                    cnt_two = 0;
                    state = ONE;
                }
                break;
        }
    }
    cout << max_len * 2 + 1 << "\n";

    return 0;
}