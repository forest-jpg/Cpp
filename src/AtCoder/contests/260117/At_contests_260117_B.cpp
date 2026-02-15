// 問題文
// AtCoder 国の公用語は、高橋語と青木語の 2 つの言語です。
// 高橋語と青木語は、どちらもその言語に含まれる単語を表記するのに英小文字の一部を使います。 
// 高橋語では長さ N の文字列 S に含まれる文字のみを使い、
// 青木語では長さ M の文字列 T に含まれる文字のみを使います。
// AtCoder 国の公用語に含まれる Q 個の単語 w1,w2,…,wQ が与えられます。
// 各単語について、その単語に含まれる文字からその単語が次のうちどれに該当するか判定してください。
//      高橋語の単語であることが確定する
//      青木語の単語であることが確定する
//      どちらともいえない

// 制約
// 1≤N≤26 1≤M≤26
// S は英小文字からなる長さ N の文字列
// S に含まれる文字は先頭からアルファベット順で昇順に並んでいる
// S に含まれる文字はすべて異なる
// T は英小文字からなる長さ M の文字列
// T に含まれる文字は先頭からアルファベット順で昇順に並んでいる
// T に含まれる文字はすべて異なる
// 1≤Q≤100
// wi は英小文字からなる長さ 1 以上 100 以下の文字列 (1≤i≤Q)
// wi は高橋語か青木語のどちらかの単語 (1≤i≤Q)
// N,M,Q は整数

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N M
// S
// T
// Q
// w1 
// w2
// ​⋮
// wQ

// 出力
// Q 行にわたって出力せよ。 
// i 行目には、wi が高橋語の単語であることが確定するなら Takahashi 、
// 青木語の単語であることが確定するなら Aoki 、どちらとも確定しないなら Unknown と出力せよ。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int int_N, int_M, int_Q;
    string str_S, str_T;
    vector<string> vStr_words;

    cin >> int_N >> int_M >> str_S >> str_T >> int_Q; // LCOV_EXCL_BR_LINE
    string str_tmp;
    for (int i = 0; i < int_Q; i++) {
        cin >> str_tmp; // LCOV_EXCL_BR_LINE
        vStr_words.push_back(str_tmp);
    }

    for (int i = 0; i < int_Q; i++ ) {
        bool bl_is_takahashi = true;
        for (char c : vStr_words[i]) {
            if (str_S.find(c) == string::npos) {
                bl_is_takahashi = false;
                break;
            }
        }

        bool bl_is_aoki = true;
        for (char c : vStr_words[i]) {
            if (str_T.find(c) == string::npos) {
                bl_is_aoki = false;
                break;
            }
        }

        if (bl_is_takahashi && !bl_is_aoki) {
            cout << "Takahashi" << "\n"; // LCOV_EXCL_BR_LINE
        }
        else if (bl_is_aoki && !bl_is_takahashi) {
            cout << "Aoki" << "\n"; // LCOV_EXCL_BR_LINE
        }
        else {
            cout << "Unknown" << "\n"; // LCOV_EXCL_BR_LINE
        }
    }

    return 0;
}