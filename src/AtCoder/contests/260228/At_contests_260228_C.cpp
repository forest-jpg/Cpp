// 問題文
// 英大文字からなる文字列 S,T が与えられます。
//
// あなたは以下の 2 種類の操作を好きな順序で好きな回数（0 回でも良い）行うことができます。
//
// 1. S の好きな位置（先頭および末尾を含む）に文字 A を 1 つ挿入する。
// 2. S に含まれる文字 A を 1 つ選んで削除する。なお、残った文字は元の順序を保ったまま連結される。
//
// S を T に一致させることが可能かどうか判定し、可能な場合は必要な操作回数の合計の最小値を求めてください。
//
// 制約
// • S,T は英大文字からなる長さ 1 以上 3×10^5 以下の文字列
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// S
// T
//
// 出力
// S を T に一致させることが可能ならば必要な操作回数の合計の最小値を、不可能ならば -1 を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    string S, T;
    cin >> S >> T;

    vector<char> s_base, t_base;
    vector<int> s_a, t_a;
    int cnt = 0;
    rep(i, 0, S.size()) {
        if (S.at(i) == 'A') {
            cnt++; 
        }
        else {
            s_base.push_back(S.at(i));
            s_a.push_back(cnt);
            cnt = 0;
        }
    }
    s_a.push_back(cnt);
    cnt = 0;
    rep(i, 0, T.size()) {
        if (T.at(i) == 'A') {
            cnt++; 
        }
        else {
            t_base.push_back(T.at(i));
            t_a.push_back(cnt);
            cnt = 0;
        }
    }
    t_a.push_back(cnt);

    bool NG = false;
    int ans = 0;
    if (s_base != t_base) NG = true;
    if (!NG) {
        rep(i, 0, s_a.size()) ans += abs(s_a.at(i) - t_a.at(i));
    }
    cout << (NG ? -1 : ans) << "\n";
    
    return 0;
}