// 問題文
// 英小文字からなる文字列 S が与えられます。
// S の中で出現回数が最も多い文字をすべて取り除き、残った文字を元の順序を保ったまま
// 連結して出力してください。
//
// なお、出現回数が最大の文字が複数種類ある場合は、そのすべてを取り除いてください。
//
// 制約
// 1 ≤ |S| ≤ 100
// S は英小文字からなる文字列である
//
// 入力
// S
//
// 出力
// 答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    string S;
    cin >> S;

    map<char, int> alpha = {
        {'a', 0},{'b', 1},{'c', 2},{'d', 3},{'e', 4},
        {'f', 5},{'g', 6},{'h', 7},{'i', 8},{'j', 9},
        {'k', 10},{'l', 11},{'m', 12},{'n', 13},{'o', 14},
        {'p', 15},{'q', 16},{'r', 17},{'s', 18},{'t', 19},
        {'u', 20},{'v', 21},{'w', 22},{'x', 23},{'y', 24},
        {'z', 25}
    };
    string num = {
        'a', 'b', 'c', 'd', 'e',
        'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o',
        'p', 'q', 'r', 's', 't',
        'u', 'v', 'w', 'x', 'y',
        'z'
    };
    vector<int> freq(26, 0);
    rep(i, 0, S.size()) freq.at(alpha[S.at(i)])++;
    vector<int> index;
    int tmp=0;
    rep(i, 0, 26) {
        if (tmp < freq.at(i)) {
            index.clear();
            tmp = freq.at(i);
            index.push_back(i);
        } else if (tmp == freq.at(i)) index.push_back(i);
    }
    rep(i, 0, S.size()) {
        bool ok = true;
        rep(j, 0, index.size()) {
            if (S.at(i) == num.at(index.at(j))) ok = false;
        }
        if (ok) cout << S.at(i);
    }
    cout << "\n";
    
    return 0;
}