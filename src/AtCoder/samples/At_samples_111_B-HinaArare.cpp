// 問題文
// 日本では、3 月 3 日にひなあられという、色のついたお菓子をお供えする習慣があります。
// 1 つの袋があり、ひなあられが N 個入っています。
// この袋には、桃色、白色、緑色の 3 種類か、桃色、白色、緑色、黄色の 
// 4 種類のひなあられが入っていることが分かっています。
// 桃色を P、白色を W、緑色を G、黄色を Y と表したとき、袋からひなあられを 
// 1 粒ずつ取り出していったところ、i 番目に取り出したひなあられの色は 
// Si でした。
// この袋に 3 種類のひなあられが入っていた場合は Three、
// 4 種類のひなあられが入っていた場合は Four と出力してください。

// 制約
// 1≤N≤100
// Si は P か W か G か Y
// Si=P、Sj=W、Sk=G を満たす i,j,k が必ず存在する

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
// S1 S2 ... SN
 
// 出力
// 袋に 3 種類のひなあられが入っていた場合は Three、
// 4 種類のひなあられが入っていた場合は Four と出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // LCOV_EXCL_BR_LINE
    /* setを使った解放 */
    ll N;
    cin >> N; // LCOV_EXCL_BR_LINE
    set<char> S;

    rep(i, N) {
        char c;
        cin >> c; // LCOV_EXCL_BR_LINE
        S.insert(c);
    }

    if (S.size() == 3) cout << "Three" << "\n"; // LCOV_EXCL_BR_LINE
    else cout << "Four" << "\n"; // LCOV_EXCL_BR_LINE
    /* 自分の回答 */
    // ll N;
    // cin >> N; // LCOV_EXCL_BR_LINE
    // vector<string> S(N + 1,"");
    // rep(i, N) {
    //     cin >> S[i]; // LCOV_EXCL_BR_LINE
    // }

    // auto it = find(S.begin(), S.end(), "Y");
    // if(it != S.end()) cout << "Four" << "\n"; // LCOV_EXCL_BR_LINE
    // else cout << "Three" << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}
