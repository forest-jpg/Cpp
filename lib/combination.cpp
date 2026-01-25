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
    cout << combination(5, 3) << "\n";
    cout << combination(5, 1) << "\n";
    cout << combination(5, 5) << "\n";
    cout << combination(4, 5) << "\n";
    cout << combination(4, 0) << "\n";
    return 0;
}
