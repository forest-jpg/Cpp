// 問題文
// 英小文字 c が与えられるので、 c が母音であるか判定してください。
// ここで、英小文字のうち母音は a、e、i、o、uの 5 つです。

// 制約
// c は英小文字である。

// 入力
// 入力は以下の形式で標準入力から与えられる。
// c

// 出力
// c が母音であるとき、vowel と、そうでないとき consonant と出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    char c;
    cin >> c;
    string ans;
    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            ans = "vowel";
            break;
        default:
            ans = "consonant";
            break;
    }
    cout << ans << "\n";

    return 0;
}
