// 問題文
// 小さい順に並べられている、要素数 N の配列 A = [A_1, A_2, ..., A_N] があります。
// 要素 X は配列 A の何番目に存在するかを出力してください。
//
// なお、この問題は単純な全探索でも解けますが、ここでは二分探索法を使って実装してください。
//
// 制約
// 1 ≤ N ≤ 100000
// 1 ≤ A_1 < A_2 < ... < A_N ≤ 10^9
// 整数 X は A_1, A_2, ..., A_N のいずれかである
//
// 入力
// 入力は以下の形式で標準入力から与えられます。
// N X
// A_1 A_2 ... A_N
//
// 出力
// 要素 X は配列 A の何番目に存在するかを出力してください。


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repr(i, s, n) for (int i = n-1; i >= (int)(s); i--)

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N+1, 0);
    rep(i, 1, N+1) cin >> A[i];
    int left = 1, right = N, mid = (left + right)/2;
    while(left <= right) {
        mid = (left + right) / 2;
        if (X < A[mid]) right = mid - 1;
        else if (A[mid] < X) left = mid + 1;
        else break;
    }
    cout << mid << "\n";
    return 0;
}
