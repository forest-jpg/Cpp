// 問題文
// 整数 N が 10 進法表記で与えられます。
// N を 2 進法に変換した値を出力するプログラムを作成してください。

// 制約
// N は 1 以上 1000 以下の整数

// 入力
// 入力は以下の形式で標準入力から与えられます。
// N

// 出力
// N を 2 進法に変換した値を、10 桁で出力してください。
// 桁数が足りない場合は、左側を 0 で埋めてください。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

int main() {
    int N;
    cin >> N;

    vector<int> ans(10, 0);
    int cnt = 0;
    while(N > 0) {
        ans[cnt] =  (N % 2);
        N /= 2;
        cnt++;
    }

    reverse(ans.begin(), ans.end());
    rep(i, 0, 10) cout << ans[i];
    cout << "\n";

    return 0;
}
