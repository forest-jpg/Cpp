// 問題文
// 頂点 1, 2, …, N の N 頂点からなる木が与えられます。
// この木の辺のうち i 本目は頂点 U_i と頂点 V_i を結びます。
// 頂点 i には整数 A_i が書かれています。

// 全ての k=1, 2, …, N について以下の問題に答えてください。

// 問題: 頂点 1 から頂点 k への単純なパス (同じ頂点を複数回通らないパス) に含まれる
// 頂点について、同じ整数の書かれた異なる 2 頂点の組が存在すれば Yes、
// そうでないなら No と答えよ。
// なお、木上の 2 つの頂点を結ぶ単純なパスが一意に定まることは証明できる。

// 制約
// 入力は全て整数
// 2 ≤ N ≤ 2×10^5
// 1 ≤ A_i ≤ 10^9
// 1 ≤ U_i, V_i ≤ N
// 与えられるグラフは木

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// A_1 A_2 … A_N
// U_1 V_1
// U_2 V_2
// ⋮
// U_{N-1} V_{N-1}

// 出力
// N 行出力せよ。
// そのうち i 行目には、k=i である場合の問題の答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

bool search_path(int pos, 
    const vector<vector<int>>& g, 
    vector<int>& path, 
    bool *used, 
    int goal
) {
    used[pos] = true;
    path.push_back(pos);

    if(pos == goal) return true;

    for (int next : g[pos]) if (!used[next]) {
        if (search_path(next, g, path, used, goal)) return true;
    }

    path.pop_back();    // 行き止まりだったので１つ戻る
    return false;
}

int main() {
    ll N;
    cin >> N;
    ll A[N];
    rep(i, 0, N) cin >> A[i];    // 0-index
    int U[N-1], V[N-1];
    rep(i, 0, N-1) cin >> U[i] >> V[i];

    // 1-index
    vector<vector<int>> g(N+1, vector<int>(0));
    rep(i, 0, N-1) {
        g.at(U[i]).push_back(V[i]);
        g.at(V[i]).push_back(U[i]);
    }

    // TLE
    // rep(i, 1, N+1) {
    //     vector<int> path;
    //     bool used[N+1];
    //     rep(j, 0, N+1) used[i] = false;
    //     (void)search_path(1, g, path, used, i);
    //     vector<ll> chk;
    //     for(auto idx : path) chk.push_back(A[idx-1]);
    //     cout << ((set<int>(chk.begin(), chk.end()).size() != chk.size()) ? "Yes" : "No") << "\n";
    // }

    vector<int> path;
    bool used[N+1];
    rep(i, 0, N+1) used[i] = false;
    (void)search_path(1, g, path, used, N);
    rep(i, 1, N+1) {
        vector<ll> chk;
        rep(j, 1, i) chk.push_back(A[path[i]-1]);
        cout << ((set<int>(chk.begin(), chk.end()).size() != chk.size()) ? "Yes" : "No") << "\n";
    }
    
    return 0;
}