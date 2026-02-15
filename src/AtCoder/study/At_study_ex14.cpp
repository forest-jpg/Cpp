// 問題文
// 三人兄弟の A 君と B 君と C 君が背くらべをしています。
// 三人の身長が与えられるので、最も大きい人と最も小さい人の身長差を出力してください。
//
// 例えば、A 君の身長が 160、B 君の身長が 154、C 君の身長が 152 であるとします。
// このとき最も大きいのは A 君で、最も小さいのは C 君なので、出力は 8 になります。
//
// 制約
// 1≦A,B,C≦200
// A,B,C は整数
//
// 入力
// 入力は次の形式で標準入力から与えられます。
// A
// B
// C
//
// 出力
// 最も大きい人と最も小さい人の身長差を出力してください。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    #define N (3u)
    vector<int> n(N);
    rep(i, 0, N) cin >> n[i]; // LCOV_EXCL_BR_LINE
    sort(n.begin(), n.end());

    cout << (n[N - 1] - n[0]) << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
