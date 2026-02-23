// 問題文
// 英小文字からなる文字列 S が良い文字列であるとは、
// すべての 1 以上の整数 i について次の性質が成り立つことであります。
//      S にちょうど i 回現れる文字はちょうど 0 種類またはちょうど 2 種類ある
// 文字列 S が与えられるので、S が良い文字列か判定してください。

// 制約
// - S は英小文字からなる長さ 1 以上 100 以下の文字列

// 入力
// S

// 出力
// S が良い文字列ならば Yes を、そうでないならば No を出力してください。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    string  s;
    cin >> s;
    map<char, int> frequency = {
        {'a', 0},{'b', 0},{'c', 0},{'d', 0},{'e', 0},
        {'f', 0},{'g', 0},{'h', 0},{'i', 0},{'j', 0},
        {'k', 0},{'l', 0},{'m', 0},{'n', 0},{'o', 0},
        {'p', 0},{'q', 0},{'r', 0},{'s', 0},{'t', 0},
        {'u', 0},{'v', 0},{'w', 0},{'x', 0},{'y', 0},
        {'z', 0},
    };
    map<int, int> cnt;
    rep(i, 0, s.size() + 1) cnt[i] = 0;

    for (auto x : s) frequency[x]++;
    for (const auto& p : frequency) cnt[p.second]++;
    // for (const auto& p : frequency) cout << p.first << " " << p.second << "\n";
    // for (const auto& p : cnt) cout << p.first << " " << p.second << "\n";

    bool ok = true;
    for (const auto& p : cnt) if (p.first > 0 && p.second != 0 && p.second != 2) ok = false;

    cout << ((ok) ? "Yes" : "No") << "\n";


    return 0;
}