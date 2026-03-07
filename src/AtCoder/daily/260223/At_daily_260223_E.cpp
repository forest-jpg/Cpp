// 問題文
// N 頂点の木 T があり、i (1≤i≤N−1) 番目の辺は頂点 U_i と頂点 V_i を結んでいます。
//
// T 上の相異なる 2 頂点 X, Y が与えられるので、頂点 X から頂点 Y への単純パス上の頂点
//（端点含む）を順に列挙してください。
//
// ただし、木上の任意の相異なる 2 頂点 a, b について、a から b への単純パスがただ一つ
// 存在することが証明できます。
//
// 制約
// - 1≤N≤2×10^5
// - 1≤X,Y≤N
// - X≠Y
// - 1≤U_i, V_i≤N
// - 入力はすべて整数
// - 与えられるグラフは木
//
// 入力
// N X Y
// U_1 V_1
// U_2 V_2
// ⋮
// U_{N−1} V_{N−1}
//
// 出力
// 頂点 X から頂点 Y への単純パス上の頂点番号を順に空白区切りで出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<vector<int>> G(N, vector<int>(0));
    vector<int> U(N-1), V(N-1);
    rep(i, 0, N-1) cin >> U.at(i) >> V.at(i);
    rep(i, 0, N-1) {
        G.at(U.at(i)).push_back(V.at(i));
    }
    bool searching = true;
    while (searching)
    {
        rep(i, 0, G.at(Y).size());
    }
    

    return 0;
}