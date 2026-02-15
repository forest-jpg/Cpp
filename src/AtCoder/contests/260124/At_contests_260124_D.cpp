
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // LCOV_EXCL_BR_LINE
    ll N, Q;

    cin >> N >> Q; // LCOV_EXCL_BR_LINE
    vector<int> A(N + 1, 0);
    vector<int> S(N + 1, 0);
    rep(i, Q) {
        cin >> A[i]; // LCOV_EXCL_BR_LINE
        S[i + 1] = S[i] + A[i];
    }
    rep(i, Q) {
        int t;
        cin >> t; // LCOV_EXCL_BR_LINE
        if (t == 1) {
            int x;
            cin >> x; // LCOV_EXCL_BR_LINE
            x--;
            swap(A[x], A[x + 1]);
            S[x + 1] = S[x] + A[x];
        }
        else if (t == 2) {
            int l, r;
            cin >> l >> r; // LCOV_EXCL_BR_LINE
            --l;
            cout << S[r] - S[l] << "\n"; // LCOV_EXCL_BR_LINE
        }
    }

    return 0;
}
