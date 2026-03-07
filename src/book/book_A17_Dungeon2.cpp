// 動的計画法の復元
// 3<=N<=100000
// 1<=Ai<=100 (2<=i<=N)
// 1<=Bi<=100 (3<=i<=N)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repr(i, e, n) for (int i = n-1; i >= e ; i--)

int main() {
    int N;
    cin >> N; // LCOV_EXCL_BR_LINE
    vector<int> A(N, 0), B(N, 0);
    rep(i, 1, N) cin >> A.at(i-1);    // LCOV_EXCL_BR_LINE
    rep(i, 2, N) cin >> B.at(i-2);    // LCOV_EXCL_BR_LINE

    vector<int> dp(N,0);
    dp.at(0) = 0;
    dp.at(1) = A.at(0);
    rep(i, 2, N) {
        int next = dp.at(i-1) + A.at(i-1);
        int skip = dp.at(i-2) + B.at(i-2);
        dp.at(i) = (next < skip) ? next : skip;
    }

    // どっち採用したか確認しながらbackする
    deque<int> root;
    root.push_front(N);
    repr(i, 1, N) {
        if (dp.at(i) == dp.at(i-1) + A.at(i-1)) root.push_front(i);
        else root.push_front((i--)-1);
    }

    cout << root.size() << "\n";
    rep(i, 0, root.size()) cout << root.at(i) << " ";
    cout << "\n";

    return 0;
}
