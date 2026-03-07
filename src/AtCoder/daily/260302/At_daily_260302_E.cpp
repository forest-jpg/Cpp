// 問題文
// 非負整数 n が次の条件を満たすとき、
// n を「良い整数」と呼びます。
// 
// n を 10 進法で表したときに、偶数の数字
// (0, 2, 4, 6, 8) のみが登場する。
// 例えば 0、68 および 2024 は良い整数です。
//
// 整数 N が与えられます。良い整数のうち小さい方から
// N 番目の整数を求めてください。
//
// 制約
// 1 ≤ N ≤ 10^12
// N は整数
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
//
// 出力
// 小さい方から N 番目の良い整数を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    ll N;
    cin >> N;

    vector<int> v;
    N--;
    do {
        v.push_back(N % 5);
        N /= 5;
    } while (N > 0);
    vector<int> tmp = {0, 2, 4, 6, 8};
    vector<int> ans;
    rep(i, 0, v.size()) ans.push_back(tmp.at(v.at(i)));
    reverse(ans.begin(), ans.end());

    rep(i, 0, ans.size()) cout << ans.at(i);
    cout << "\n";

    return 0;
}