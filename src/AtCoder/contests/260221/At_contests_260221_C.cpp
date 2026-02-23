#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int  T;
    cin >> T;

    vector<int> ans(T+1, 0);
    rep(i, 1, T+1){
        int N, D;
        cin >> N >> D;
        vector<int> A(N+1, 0), B(N+1, 0);
        rep(j, 1, N+1) cin >> A.at(j);
        rep(j, 1, N+1) cin >> B.at(j);

        /* TLE */
        queue<int> q;
        rep(j, 1, N+1){
            rep(morning, 1, A.at(j)+1) q.push(j);
            rep(lunch, 1, B.at(j)+1) q.pop();
            while(!q.empty() && (q.front() == j-D)) q.pop();
        }
        ans.at(i) = q.size();
    }
    rep(i, 1, T+1) cout << ans.at(i) << "\n";


    return 0;
}