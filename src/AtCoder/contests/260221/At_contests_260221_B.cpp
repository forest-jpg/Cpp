
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> L(n+1, 0);
    vector<vector<int>> X(n+1, vector<int>(0,0));
    rep(i, 1, n+1) {
        cin >> L.at(i);
        rep(j, 1, L.at(i) + 1) {
            int tmp;
            cin >> tmp;
            X.at(i).push_back(tmp);
        }
    }

    vector<int> M(m + 1, 0), ans(n+1, 0);
    rep(i, 1, n+1) {
        rep(j, 0, L.at(i)) {
            if (M.at(X.at(i).at(j)) == 0) {
                M.at(X.at(i).at(j)) = 1;
                ans.at(i) = X.at(i).at(j);
                break;
            }
        }
    }
    rep(i, 1, n+1) cout << ans.at(i) << "\n";
    
    return 0;
}