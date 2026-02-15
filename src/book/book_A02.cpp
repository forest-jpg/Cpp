// 全探索
// 数値を探す
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    int N, X;
    cin >> N >> X; // LCOV_EXCL_BR_LINE
    vector<int> A(N, 0);

    string ans = "No";
    rep(i, 0, N) {
        cin >> A.at(i); // LCOV_EXCL_BR_LINE
        if (A.at(i) == X) ans = "Yes";
    }
    cout << ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
