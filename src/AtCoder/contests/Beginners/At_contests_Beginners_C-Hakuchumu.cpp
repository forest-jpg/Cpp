// 問題文
// 英小文字からなる文字列 S が与えられます。
// T が空文字列である状態から始め、以下の操作を好きな回数繰り返すことで
// S = T とすることができるか判定してください。
//
// T の末尾に dream dreamer erase eraser のいずれかを追加する。
//
// 制約
// 1 ≦ |S| ≦ 10^5
//
// S は英小文字からなる。
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// S
//
// 出力
// S = T とすることができる場合 YES を、そうでない場合 NO を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    string s;
    cin >> s; // LCOV_EXCL_BR_LINE
    string ans = "YES";
    for (string::size_type i = 0; i < s.size();) {
        if (s.compare(i, 11, "dreameraser") == 0) i += 11;
        else if (s.compare(i, 10, "dreamerase") == 0) i += 10;
        else if (s.compare(i, 7, "dreamer") == 0) i += 7;
        else if (s.compare(i, 5, "dream") == 0) i += 5;
        else if (s.compare(i, 6, "eraser") == 0) i += 6;
        else if (s.compare(i, 5, "erase") == 0) i += 5;
        else {
            ans = "NO";
            break;
        }
    }
    
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}