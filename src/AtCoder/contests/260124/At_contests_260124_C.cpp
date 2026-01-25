// 問題文
// N 人の研究者がおり、研究者には 1,2,…,N の番号が付けられています。
// 研究者の間には M 個の利害関係があり、
// i=1,2,…,M に対して研究者 Ai と研究者 Bi は互いに利害関係にあります。
// 論文の査読者は、その論文の著者とは異なり、著者と利害関係にない相異なる 
// 3 人の研究者である必要があります。
// i=1,2,…,N について以下の問題を解いてください。

// 研究者 i が著者である論文の査読者の 3 人組として考えられるものは何通りあるか求めよ。
// ただし、すべての論文は単著であるものとします。

// 制約
// 1≤N≤2×10^5
// 0≤M≤2×10^5
 // 1≤Ai,Bi≤N
// Ai!=Bi
// i!=j のとき (Ai,Bi)!=(Aj,Bj)
// i!=j のとき (Ai,Bi)!=(Bj,Aj)
// 入力される値はすべて整数

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N M
// A1 B1
// A2 B2
// ⋮
// AM BM
 
// 出力
// i=1,2,…,N に対する答えをこの順に空白区切りで出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll combination(ll n, ll r) {
    ll rtn;
    if (n < r) {
        rtn = 0;
    }
    else if (n == r) {
        rtn = 1;
    }
    else {
        if ((n - r) < r) r = n - r;
        rtn = 1;
    
        rep(i, r) {
            rtn *= (n - r + (i + 1)) ;
        }
        rep(i, r) {
            rtn /= (i + 1);
        }
    }
    return rtn;
}

int main() {
    ll N, M;
    int A[200005],B[200005];

    /* 入力 */
    cin >> N >> M;
    vector<ll> cnt_N(N + 1, N - 1);
    rep(i, M) {
        cin >> A[i] >> B[i];
        cnt_N[A[i]]--;
        cnt_N[B[i]]--;
    }
    
    rep(i, N) {
        cout << combination(cnt_N[i + 1], 3) << " ";
    }

    return 0;
}
