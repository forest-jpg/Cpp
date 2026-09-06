// 問題文
// N台のプリンターがあり、1からNまでの番号が付けられています。
// プリンターiはAi秒ごとにチラシを1枚印刷します。
// すなわち、スイッチを入れてからAi秒後、2Ai秒後、3Ai秒後･･･に印刷します。
// すべてのプリンターのスイッチを同時に入れたとき、K枚目のチラシが印刷されるのは何秒後でしょうか。

// 制約
// 1≤N≤100000
// 1≤K≤10^9
// 1≤Ai≤10^9
// 答えは10^9を超えない
// 入力はすべて整数

// 入力
// 入力は以下の形式で標準入力から与えられます。
// N
// K
// A1 A2 ⋯ AN

// 出力
// 何秒後にK枚目のチラシが印刷されるかを一行で出力してください。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repr(i, s, n) for (int i = n-1; i >= (int)(s); i--)

ll check(ll sec, vector<ll> *A, ll size) {
    ll rtn = 0;
    rep(i, 0, size) rtn += sec / A->at(i);
    return rtn;
}

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N, 0);
    rep(i, 0, N) cin >> A[i];
    
    ll left = 1, right = 1000000000, mid = 0;
    while (left <= right) {
        mid = (left + right) / 2;
        ll calc = check(mid, &A, N);
        if (calc > K) right = mid - 1;
        else if (calc == K) break;
        else left = mid + 1;
    }
    cout << mid << "\n";

    return 0;
}
