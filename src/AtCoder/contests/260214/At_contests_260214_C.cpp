// 問題文
// マス1, マス2, …, マスNのN個のマスが1列に並んでいます。
// マスiには整数A_i (i ≤ A_i ≤ N)が書かれています。

// s = 1, 2, …, Nのそれぞれについて、以下の問題を解いてください。

// はじめ、マスsに駒を置く。「駒が置かれているマスに書かれている整数を
// xとして、駒をマスxに移動させる」という操作を10^100回行った後、
// 駒が置かれているマスの番号を出力する。

// 制約
// 1 ≤ N ≤ 5×10^5
// i ≤ A_i ≤ N (1 ≤ i ≤ N)
// 入力はすべて整数

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// A_1 A_2 … A_N

// 出力
// s = 1, 2, …, Nに対する答えを、この順に空白を区切りとして一行に出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

ll my_pow(ll base, ll exp) {
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) res *= base;
        base *= base;
        exp >>= 1;
    }
    return res;
}

ll pow_mod(ll base, ll exp, ll mod) {
    ll res = 1 % mod;
    ll cur = base % mod;
    while (exp > 0) {
        if (exp & 1LL) res = (res * cur) % mod;
        cur = (cur * cur) % mod;
        exp >>= 1LL;
    }
    return res;
}

ll mod(ll a, ll m) {
    ll r = a % m;
    return (r < 0) ? r + m : r;
}


int main() {
    int n;
    cin >> n; // LCOV_EXCL_BR_LINE
    vector<int> a(n);
    rep(i, 0, n) cin >> a.at(i); // LCOV_EXCL_BR_LINE
    vector<int> pass_cnt(n, 0);

    /* 0-index */
    rep(i, 0, n) {
        vector<int> loop;
        rep(j, 0, n) pass_cnt[j] = 0;
        int cur = i;
        bool isStart = false;
        while (1) {
            pass_cnt[cur] = pass_cnt[cur] + 1;
            if (pass_cnt[cur] == 2) isStart = true;
            else if (pass_cnt[cur] == 3) {
                isStart = false;
                break;
            }
            if (isStart) loop.push_back(cur);
            cur = a.at(cur) - 1;
        }
        cur = i;
        int cnt = 0;
        while (1) {
            if (cur == loop.at(0)) break;
            else {
                cur = a.at(cur) - 1;
                cnt++;
            }
        }
        ll total_cnt = pow_mod(10, 100, loop.size());
        cout << (loop.at(mod((total_cnt - cnt), loop.size())) + 1) << " "; // LCOV_EXCL_BR_LINE
    }
    cout << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}