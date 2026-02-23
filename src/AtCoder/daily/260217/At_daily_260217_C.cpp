// 問題文
// ナオヒロ君は N+1 個の連続する整数を 1 個ずつ持っていましたが、
// そのうち 1 個をなくしてしまいました。
//
// 残っている N 個の整数が順不同で A_1, ..., A_N として与えられるので、
// なくした整数を求めてください。
//
// なお、なくした整数が一意に定まるような入力のみが与えられます。
//
// 制約
// - 2 ≤ N ≤ 100
// - 1 ≤ A_i ≤ 1000
// - 入力は全て整数である
// - なくした整数は一意に定まる
//
// 入力
// N
// A_1 A_2 … A_N
//
// 出力
// 答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int  N;
    cin >> N;
    vector<int> a(N, 0), all(N+1, 0);
    rep(i, 0, N) {
        cin >> a.at(i);
        all.at(a.at(i))=1;
    }
    int minimum, maximum;
    minimum = *min_element(a.begin(), a.end());
    int ans = 0;
    rep(i, minimum, minimum + N + 1) if (all.at(i) == 0) ans = i;

    cout << ans << "\n";

    return 0;
}