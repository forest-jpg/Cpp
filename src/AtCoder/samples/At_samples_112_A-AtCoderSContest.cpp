// 問題文
// すぬけ君は、AtCoder s Contest という名前のコンテストを開こうとしています。
// ここで、s は長さ 1 以上の文字列であり、
// 1 文字目は英大文字、2 文字目以降は英小文字です。
//
// すぬけ君は、このコンテストの略称を AxC に決めました。
// ここで、x は s の先頭の英大文字です。
//
// コンテストの名前が与えられるので、コンテストの略称を出力してください。
//
// 制約
// - s の長さは 1 以上 100 以下である。
// - s の 1 文字目は英大文字である。
// - s の 2 文字目以降は英小文字である。
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// AtCoder s Contest
//
// 出力
// コンテストの略称を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    getline(cin, s); // LCOV_EXCL_BR_LINE
    string ans = "A";
    rep(i, s.size()){
        if (s[i] == ' ') {
            ans += (s[i + 1]);
            ans += 'C';
            break;
        }
    }
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    // string A, B, C;
    // cin >> A >> B >> C; // LCOV_EXCL_BR_LINE
    // cout << "A" << B[0] << "C" << endl; // LCOV_EXCL_BR_LINE
    return 0;
}
