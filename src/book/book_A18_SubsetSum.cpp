// 動的計画法　部分和への活用
// 1<=N<=60
// 1<=S<=10000
// 1<=Ai<=10000
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repr(i, e, n) for (int i = n-1; i >= e ; i--)

int main() {
    int N, S;
    cin >> N >> S; // LCOV_EXCL_BR_LINE
    vector<int> A(N+1, 0);
    rep(i, 1, N+1) cin >> A.at(i);    // LCOV_EXCL_BR_LINE

    vector<vector<bool>> dp(N+1, vector<bool>(S+1, false));

    dp.at(0).at(0) = true;
    rep(i, 1, N+1)rep(j, 0, S+1) {
        if (dp.at(i-1).at(j)) {
            dp.at(i).at(j) = true;
            dp.at(i).at(j + A.at(i)) = true;
        }
    }
    
    cout << (dp.at(N).at(S) ? "Yes" : "No") << "\n";

    return 0;
}
