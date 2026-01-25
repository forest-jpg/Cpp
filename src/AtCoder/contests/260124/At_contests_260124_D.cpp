
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N, Q;

    cin >> N >> Q;

    vector<int> A(N + 1, 0);
    vector<int> S(N + 1, 0);
    rep(i, Q) {
        cin >> A[i];
        S[i + 1] = S[i] + A[i];
    }
    rep(i, Q) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            x--;
            swap(A[x], A[x + 1]);
            S[x + 1] = S[x] + A[x];
        }
        else if (t == 2) {
            int l, r;
            cin >> l >> r;
            --l;
            cout << S[r] - S[l] << "\n";
        }
    }

    return 0;
}
