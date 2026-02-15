#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

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
    
    return 0;
}
