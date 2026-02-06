// 問題文
// 1と+と-のみからなる式 Sが1行で与えられるので、
// 計算結果を出力してください。
// 例えば式 Sが1+1+1-1であったとき、計算結果は2です。
// 具体的な式 Sの形式は以下の通りです。
// 式 Sの1文字目は必ず 1です。その後、「 +または −」と 1が交互に続きます。
// Sの最後の文字も必ず 1です。
// 式と演算子はスペースで区切られていないことに注意してください。

// 制約
// 1≦∣S∣≦100（∣S∣は文字列の長さ）
// Sは1から始まり、その後+または−と1が交互に続き、1で終わる

// 入力
// 入力は次の形式で標準入力から与えられます。
// S

// 出力
// Sの計算結果を出力してください。
// 出力の最後には改行が必要です。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)\

int main() {
    string s;
    getline(cin, s);

    int ans = 1;
    rep(i, s.size()){
        char c = s.at(i);
        if (c == '+') ans++;
        else if (c == '-') ans--;
        else continue;
    }
    cout << ans << "\n";

    return 0;
}
