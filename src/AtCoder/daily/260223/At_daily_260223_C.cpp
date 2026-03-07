// 問題文
// 1, 2, …, N の番号が付いた N 個の箱があります。
// 最初は全ての箱が空です。

// これから Q 個のボールが順番にやってきます。
// 高橋君は、数列 X = (X₁, X₂, …, Xₑ) に従ってボールを箱に入れます。
// 具体的には、i 番目にやってきたボールに次の処理を行います。

// Xᵢ ≥ 1 である場合：
//   このボールを、箱 Xᵢ に入れる。
// Xᵢ = 0 である場合：
//   このボールを、現在入っているボールが最も少ない箱のうち番号が最小である箱に入れる。

// それぞれのボールをどの箱に入れたかを求めてください。

// 制約
// - 入力は全て整数
// - 1 ≤ N ≤ 100
// - 1 ≤ Q ≤ 100
// - 0 ≤ Xᵢ ≤ N

// 入力
// N Q
// X₁ X₂ … Xₑ

// 出力
// i 番目にやってきたボールを箱 Bᵢ に入れたとき、次の形式に従って出力せよ。
// B₁ B₂ … Bₑ
#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i, s, n) for (ll i = s; i < (ll)(n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> X(Q);
    rep(i, 0, Q) cin >> X.at(i);

    vector<int> box(N, 0), ans(Q, 0);
    rep(i, 0, Q) {
        if (X.at(i) > 0) {
            box.at(X.at(i)-1)++;   // 0-index
            ans.at(i) = X.at(i);    // 1-index
        }
        else {
            // 最小値とって先頭から一致個所を探して突っ込む
            int minimun = *min_element(box.begin(), box.end());
            rep(j, 0, N) if (minimun == box.at(j)) {
                box.at(j)++;
                ans.at(i) = j+1;    // 1-index
                break;
            }
        }
    }

    rep(i, 0, Q) cout << ans.at(i) << " ";
    cout << "\n";

    return 0;
}