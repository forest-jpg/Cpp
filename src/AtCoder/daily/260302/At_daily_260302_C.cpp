// 問題文
// キーエンスでは良いことも悪いこともありのままに報告するという文化があります。
// そこで、報告内容が元の文章のありのままであるかを確認したいです。

// 英小文字のみからなる文字列 S, T が与えられます。
// S と T が等しいならば 0 を、そうでないならば異なっている文字のうち先頭のものが何文字目かを出力してください。
// ただし、S,T の一方にのみ i 文字目が存在するときも、i 文字目は異なっているとみなすものとします。

// より厳密には、S と T が等しくないならば次の条件のうちいずれかをみたす最小の整数 i を出力してください。
// 1. 1≤i≤|S| かつ 1≤i≤|T| かつ S[i]≠T[i]
// 2. |S|<i≤|T|
// 3. |T|<i≤|S|
// ただし、|S|,|T| でそれぞれ S,T の長さを、S[i],T[i] でそれぞれ S,T の i 文字目を表します。

// 制約
// S,T は英小文字のみからなる長さ 1 以上 100 以下の文字列

// 入力
// 入力は以下の形式で標準入力から与えられる。
// S
// T

// 出力
// S と T が等しいならば 0 を、そうでないならば異なっている文字のうち先頭のものが何文字目かを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    string S, T;
    cin >> S >> T;

    int ans = 0;
    if (S != T) {
        int s_len = S.size(), t_len = T.size();
        int shorter = (s_len < t_len) ? s_len : t_len;
        rep(i, 0, shorter) if (S.at(i) != T.at(i)) {
            ans = i+1;
            break;
        }
        if (ans == 0) ans = shorter + 1;
    }

    cout << ans << "\n";

    return 0;
}