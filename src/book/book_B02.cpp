// 全探索
// A以上B以下の整数のうち、100の約数は存在するか。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    int a, b;
    cin >> a >> b; // LCOV_EXCL_BR_LINE
    bool has_divisor = false;
    rep(i, 1, 101) {
        if (100 % i == 0 && a <= i && i <= b) {
            has_divisor = true;
            break;
        }
    }

    string ans = has_divisor ? "Yes" : "No";
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
