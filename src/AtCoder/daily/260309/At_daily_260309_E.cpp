// 問題文
// 正の整数 X は、次の条件をみたすときかつその時に限り、良い整数と呼ばれます。
//
// 正の整数の組 (a,b) を用いて、
// X=2^a × b^2 と書ける。
// 例えば、400 は 400=2^2 × 10^2 と書けるため、良い整数です。
//
// 正の整数 N が与えられるので、
// 1 以上 N 以下の良い整数の個数を求めてください。
//
// 制約
// 1≤N≤10^18
// N は整数
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
//
// N
//
// 出力
// 1 以上 N 以下の良い整数の個数を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

ll my_pow(ll base, ll exp) {
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) res *= base;
        base *= base;
        exp >>= 1;
    }
    return res;
}

int main() {
    ll N;
    cin >> N;

    ll calc = 1;
    set<ll> data;
    while(calc <= N) {
        calc *= 2;
        for (ll j = 1; ; j++) {
            ll tmp = calc * my_pow(j, 2);
            if(tmp <= N) {
                data.insert(tmp);
            }
            else break;
        }
    }
    cout << data.size() << "\n";

    return 0;
}