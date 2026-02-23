// 問題文
// N 人の人 1,2,…,N がある試験を受け、人 i は A_i 点を取りました。
// この試験では、L 点以上を取った人のみが合格となります。
// N 人のうち何人が合格したか求めてください。

// 制約
// 入力は全て整数
// 1≤N≤100
// 1≤L≤1000
// 0≤A_i≤1000

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// L
// A_1
// A_2
// …
// A_N

// 出力
// 答えを整数として出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int N, L;
    cin >> N >> L;
    vector<int> a(N, 0);
    rep(i, 0, N) cin >> a.at(i);

    int cnt = 0;
    rep(i, 0, N) if (a.at(i) >= L) cnt++;
 
    cout << cnt << "\n";

    return 0;
}