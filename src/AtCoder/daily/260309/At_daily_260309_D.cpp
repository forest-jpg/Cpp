// 問題文
// AtCoder 市では、
// N 種類のゴミを定期的に収集しています。
// i(=1,2,…,N) 種類目のゴミは、日付を 
// q_i で割ったあまりが r_i の日に収集されます。

// Q 個の質問に答えてください。
// j(=1,2,…,Q) 番目の質問では、
// d_j 日に t_j 種類目のゴミが出たときに、次にそれが収集される日を答えてください。

// ただし、i 種類目のゴミが出た日が、i 種類目のゴミが回収される日であった場合、そのゴミは同じ日に収集されるとします。

// 制約
// 1≤N≤100
// 0≤r_i<q_i≤10^9

// 1≤Q≤100
// 1≤t_j≤N
// 1≤d_j≤10^9

// 入力はすべて整数
// 入力
// 入力は以下の形式で標準入力から与えられる。

// N
// q_1 r_1
// q_2 r_2
// ⋮
// q_N r_N
// Q
// t_1 d_1
// t_2 d_2
// ⋮
// t_Q d_Q

// 出力
// Q 行出力せよ。
// j(1≤j≤Q) 行目には、j 番目の質問に対する答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    ll N;
    cin >> N;
    vector<ll> q(N), r(N);
    rep(i, 0, N) cin >> q[i] >> r[i];
    ll Q;
    cin >> Q;
    vector<ll> t(Q), d(Q);
    rep(i, 0, Q) cin >> t[i] >> d[i];

    vector<ll> ans(Q, 0);
    rep(i, 0, Q) if (d[i] % q[t[i]-1] <= r[t[i]-1]) ans[i] = q[t[i]-1] * (d[i] / q[t[i]-1]) + r[t[i]-1];
    else ans[i] = q[t[i]-1] * (d[i] / q[t[i]-1] + 1) + r[t[i]-1];
    
    rep(i, 0, Q) cout << ans[i] << "\n";

    return 0;
}