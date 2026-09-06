// 問題文
// あるリゾートホテルには、1号室からN号室までのN個の部屋があります。
// i号室はA_i人部屋です。このホテルではD日間にわたって工事が行われることになっており、
// d日目はL_d号室からR_d号室までの範囲を使うことができません。
// d=1,2,⋯Dについて、d日目に使える中で最も大きい部屋は何人部屋であるか、
// 出力するプログラムを作成してください。
//
// 制約
// 3≤N≤100000
// 1≤D≤100000
// 1≤A_i≤100
// 2≤L_i≤R_i≤N-1
// 入力はすべて整数
//
// 入力
// 入力は以下の形式で標準入力から与えられます。
// N
// A_1 A_2 ⋯ A_N
// D
// L_1 R_1
// ⋮
// L_D R_D
//
// 出力
// D行にわたって出力してください。
// d行目には、d日目に使える中で最も大きい部屋は何人部屋であるかを出力してください。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repr(i, s, n) for (int i = n-1; i >= (int)(s); i--)

int main() {
    int N;
    cin >> N;
    vector<int> A(N+1, 0);
    rep(i, 1, N+1) cin >> A[i];

    int D;
    cin >> D;
    vector<int> L(D+1, 0), R(D+1, 0);
    rep(i, 1, D+1) cin >> L[i] >> R[i];

    vector<int> M_L(N+1, 0), M_R(N+1, 0);
    M_L[1] = A[1];
    M_R[N] = A[N];
    rep(i, 2, N+1) M_L[i] = max(M_L[i-1], A[i]);
    repr(i, 1, N) M_R[i] = max(M_R[i+1], A[i]);

    rep(i, 1, D+1) {
        cout << max(M_L[L[i]-1], M_R[R[i]+1]) << "\n";
    }

    return 0;
}
