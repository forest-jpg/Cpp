// 問題文
// 小学校の先生であるあなたはA君に九九の表を埋める宿題を出しました。 次の日、A君は宿題をやってきましたが、いくつかのマスは間違っているようです。

// A君の宿題を採点するプログラムを作成してください。

// 具体的には、以下の要件を満たすプログラムを作成してください。

// A君の回答の表(9×9の二次元配列)を入力として受け取る
// 誤った値が書き込まれたマスを正しい値に書き直す
// 正しい値が書き込まれたマスの個数を数える
// 誤った値が書き込まれたマスの個数を数える

// 制約
// 0 ≤ A(i,j) ≤ 100
// 入力
// 入力は次の形式で標準入力から与えられます。
// A(1,1) A(1,2) A(1,3) A(1,4) A(1,5) A(1,6) A(1,7) A(1,8) A(1,9)
// A(2,1) A(2,2) A(2,3) A(2,4) A(2,5) A(2,6) A(2,7) A(2,8) A(2,9)
// ...
// A(9,1) A(9,2) A(9,3) A(9,4) A(9,5) A(9,6) A(9,7) A(9,8) A(9,9)
// 出力
// A(1,1) A(1,2) A(1,3) A(1,4) A(1,5) A(1,6) A(1,7) A(1,8) A(1,9)
// A(2,1) A(2,2) A(2,3) A(2,4) A(2,5) A(2,6) A(2,7) A(2,8) A(2,9)
// ...
// A(9,1) A(9,2) A(9,3) A(9,4) A(9,5) A(9,6) A(9,7) A(9,8) A(9,9)
// correct_count
// wrong_count

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)\

#define MAX_INDEX (9u)
void saiten(vector<vector<int>> &in, int &ok_cnt, int &ng_cnt) {
    vector<vector<int>> ans(MAX_INDEX+1, vector<int>(MAX_INDEX+1, 0));
    rep(i, 1, MAX_INDEX+1)rep(j, 1, MAX_INDEX+1) ans.at(i).at(j) = i * j;
    rep(i, 1, MAX_INDEX+1)rep(j, 1, MAX_INDEX+1) {
        if (in.at(i).at(j) == ans.at(i).at(j)) ok_cnt++;
        else {
            ng_cnt++;
            in.at(i).at(j) = ans.at(i).at(j);
        }
    }
}

int main() {
    vector<vector<int>> a(MAX_INDEX+1, vector<int>(MAX_INDEX+1, 0));
    rep(i, 1, MAX_INDEX+1)rep(j, 1, MAX_INDEX+1) cin >> a.at(i).at(j);

    int correct_count = 0, wrong_count = 0;
    saiten(a, correct_count, wrong_count);

    rep(i, 1, MAX_INDEX+1)rep(j, 1, MAX_INDEX+1) {
        cout << a.at(i).at(j);
        if (j == MAX_INDEX) cout << "\n";
        else cout << " ";
    }
    cout << correct_count << "\n";
    cout << wrong_count << "\n";
    
    return 0;
}
