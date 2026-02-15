// 問題文
// 年に1 度の節分には年齢と同じ数の豆を食べます。高橋君はそれ以外に豆を食べることはありません。
// 高橋君は、今年 (0 年後) の節分の時点でN 歳です。
// 高橋君が今年以降 (今年を含む) で累計 
// K 個以上の豆を食べたことになるのは、最短で何年後の節分ですか？
// なお、高橋君は不死身なので、高橋君が今年以降で累計 
// K 個以上の豆を食べたという状況は必ず訪れます。

// 制約
// 入力は全て整数
// 1≤N,K≤10^8
 
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N 
// K

// 出力
// 答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    ll N, K;

    cin >> N >> K; // LCOV_EXCL_BR_LINE
    ll left = 0, right = 200000000;
    
    while (left < right) {
        ll mid = (left + right) / 2;
        // mid年後までの累計: N + (N+1) + ... + (N+mid)
        ll tmp = (mid + 1) * N + mid * (mid + 1) / 2;
        
        if (tmp >= K) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    cout << left << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}