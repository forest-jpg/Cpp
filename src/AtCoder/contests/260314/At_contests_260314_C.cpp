// 問題文
// 英小文字からなる長さ N の文字列 S が与えられます。

// 整数の組 (i,j) であって、以下の条件をすべて満たすものの個数を求めてください。

// 1≤i≤j≤N
// S_i = S_j
// L≤j−i≤R

// 制約
// 2≤N≤5×10^5
// 1≤L≤R≤N−1
// N,L,R は整数
// S は長さ N の英小文字からなる文字列

// 入力
// 入力は以下の形式で標準入力から与えられる。

// N
// L
// R
// S

// 出力
// 答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    int N, L, R;
    cin >> N >> L >> R;
    vector<char> S(N);
    rep(i, 0, N) cin >> S[i];

    map<char, vector<int>> m;
    set<char> alpha;
    rep(i, 0, N) {
        m[S[i]].push_back(i);
        alpha.insert(S[i]);
    }
    ll cnt = 0;
    for(auto t : alpha) {
        /* 尺取り法 */
        /* start地点を決める */
        vector<ll> R_(m[t].size(), 0), L_(m[t].size(), 0);
        rep(i, 0, R_.size()-1) {
            if (i) R_[i] = R_[i-1];
            else R_[i] = 0;
            while(R_[i] + 1 < m[t].size() && m[t][R_[i]+1] - m[t][i] <= R) R_[i]++;

            if (i) L_[i] = L_[i-1];
            else L_[i] = 0;
            while(L_[i] + 1 < m[t].size() && m[t][L_[i]+1] - m[t][i] < L) L_[i]++;
        }
        rep(i, 0, m[t].size()-1) cnt += (R_[i]-(i)) - (L_[i]-(i));
    }
    cout << cnt << "\n";
    
    return 0;
}