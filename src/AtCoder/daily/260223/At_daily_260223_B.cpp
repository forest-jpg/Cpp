// 問題文
// 6 桁の正整数 N が与えられます。
// この整数が以下の条件を全て満たすか判定してください。
//
// - N の各桁のうち、1 は丁度 1 つである。
// - N の各桁のうち、2 は丁度 2 つである。
// - N の各桁のうち、3 は丁度 3 つである。
//
// 制約
// - N は 100000≤N≤999999 を満たす整数
//
// 入力
// 入力は以下の形式で標準入力から与えられる。
// N
//
// 出力
// N が問題文中の条件を全て満たすなら Yes 、そうでないなら No と
// 1 行に出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    vector<char> N(6);
    rep(i, 0, 6) cin >> N.at(i);

    int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
    rep(i, 0, 6) {
        switch(N.at(i)){
            case '1':
                cnt_1++;
                break;
            case '2':
                cnt_2++;
                break;
            case '3':
                cnt_3++;
                break;
        }
    }
    cout << ( (cnt_1 == 1 && cnt_2 == 2 && cnt_3 == 3) ? "Yes" : "No") << "\n";

    return 0;
}