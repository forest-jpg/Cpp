// 問題文
// 高橋君は青いカードを N 枚、赤いカードを M 枚持っています。
// カードにはそれぞれ文字列が書かれており、
// i 枚目の青いカードに書かれている文字列は s_i、
// i 枚目の赤いカードに書かれている文字列は t_i です。
//
// 高橋君は、文字列を 1 つ言います。そして、全てのカードを確認し、
// その文字列が書かれた青いカードを 1 枚見つけるごとに 1 円貰えます。
// また、その文字列が書かれた赤いカードを 1 枚見つけるごとに 1 円失います。
//
// なお、高橋君の言った文字列と、カードに書かれた文字列が完全に一致していた場合のみを考えます。
// 例えば、高橋君が atcoder と言った場合、atcoderr、atcode、btcoder などと
// 書かれた青いカードがあってもお金は貰えません
// (逆に、このような文字列が書かれた赤いカードがあってもお金を失うことはありません)。
//
// 高橋君は、最大で差し引き何円貰うことができるでしょうか？
//
// ただし、違うカードに同じ文字列が書かれていることもあることに注意してください。
//
// 制約
// N, M は整数
// 1 ≤ N, M ≤ 100
// s_1, s_2, ..., s_N, t_1, t_2, ..., t_M は全て長さ 1 以上 10 以下の文字列で、
// 英小文字のみからなる
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// s_1 s_2 ... s_N
// M
// t_1 t_2 ... t_M
//
// 出力
// 高橋君が最大で差し引き X 円貰える時、X を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n; // LCOV_EXCL_BR_LINE
    vector<string> s(n);
    rep(i, 0, n) {
        cin >> s.at(i); // LCOV_EXCL_BR_LINE
    }

    cin >> m; // LCOV_EXCL_BR_LINE
    vector<string> t(m);
    rep(i, 0, m) {
        cin >> t.at(i); // LCOV_EXCL_BR_LINE
    }

    int ans = 0;
    map<string, int> map_s, map_t;
    rep(i, 0, m){
        int cnt = 0;
        rep(j, 0, m) if (t.at(i) == t.at(j) ) cnt++;
        map_t.insert({t.at(i), cnt});
    }

    rep(i, 0, n){
        int cnt = 0;
        rep(j, 0, n) if (s.at(i) == s.at(j) ) cnt++;
        map_s.insert({s.at(i), cnt});
        
        int calc = 0;
        if (map_t.contains(s.at(i))) calc = map_s[s.at(i)] - map_t[s.at(i)];
        else calc = map_s[s.at(i)];
        ans = (ans > calc) ? ans : calc;
    }
    
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
