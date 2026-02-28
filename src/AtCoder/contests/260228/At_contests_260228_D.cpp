// 問題文
// A, B, C の 3 種類の文字のみからなる文字列 S が与えられます。

// 操作を以下のように定義します。
// 1 ≤ i < j < k ≤ |S| かつ
// S_i = A, S_j = B, S_k = C を満たす
// (i, j, k) の組を選び、S の i, j, k 文字目を取り除く。
// 残った文字を元の順序を保ったまま左に詰める。

// 文字列 S に対して最大で何回操作を行うことができるかを求めてください。

// 制約
// 1 ≤ |S| ≤ 10^6
// S は A, B, C のみからなる文字列である

// 入力
// 入力は以下の形式で標準入力から与えられる。
// S

// 出力
// 答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

void getIdx
(       string* S, 
        vector<int>* idx_a, 
        vector<int>* idx_b, 
        vector<int>* idx_c
) {
    idx_a->clear();
    idx_b->clear();
    idx_c->clear();

    rep(x, 0, S->size()) {
        switch(S->at(x)){
            case 'A':
                idx_a->push_back(x);
                break;
            case 'B':
                idx_b->push_back(x);
                break;
            case 'C':
                idx_c->push_back(x);
                break;
        }
    }
}

int main() {
    string S;
    cin >> S;

    vector<int> idx_a, idx_b, idx_c;
    getIdx(&S, &idx_a, &idx_b, &idx_c);

    int ans = 0;
    rep(i, 0, idx_a.size()) {
        int idx_bb = -1;
        rep(j, 0, idx_b.size()) if (idx_a.at(i) < idx_b.at(j)) idx_bb = j;
        if (idx_bb >= 0) {
            int idx_cc = -1;
            rep(j, 0, idx_c.size()) if (idx_b.at(idx_bb) < idx_c.at(j)) idx_cc = j;
            if (idx_cc >= 0) {
                ans++;
                S.erase(idx_c.at(idx_cc), 1);
                S.erase(idx_b.at(idx_bb), 1);                
                S.erase(idx_a.at(i), 1);
                getIdx(&S, &idx_a, &idx_b, &idx_c);
                i--;
            } else break;
        } else break;
        if (i == idx_a.size() - 1) break;
    }
    cout << ans << "\n";
    
    return 0;
}