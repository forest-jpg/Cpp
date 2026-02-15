// 問題文
// N 個のカップがあり、それぞれのカップには無色透明な液体が入っています。
// 具体的には、i 番目 (1≤i≤N) のカップには Ai ml の液体が入っています。
// また、これらのうちちょうど K 個のカップには日本酒が入っており、
// それ以外には水が入っていることが分かっています。
// ただし、どのカップに日本酒が入っているかについては分かっていません。
// 高橋君は（1 つ以上の）いくつかのカップを選んでそれらに入った液体をすべて飲むことができます。
// どのカップに日本酒が入っているかによらず、高橋君が確実に X ml 以上の日本酒を飲むためには、
// 最低何個のカップを選ぶ必要があるか求めてください。
// そのような選び方が不可能である場合には −1 を出力してください。

// 制約
// 1≤K≤N≤3×10^5
// 1≤Ai≤10^9
// 1≤X≤3×10^14
// 入力はすべて整数

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N K X
// A1 A2 … AN ​
 
// 出力
// 条件をみたすために高橋君が選ぶ必要があるカップの個数の最小値を出力せよ。 
// そのような選び方が不可能である場合には −1 を出力せよ。
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int_N, int_K;
    long long longlong_X;
    vector<long long> vPairInt_A;

    cin >> int_N >> int_K >> longlong_X; // LCOV_EXCL_BR_LINE
    long long int_tmp;
    for (long long i = 0; i < int_N; i++) {
        cin >> int_tmp; // LCOV_EXCL_BR_LINE
        vPairInt_A.push_back(int_tmp);
    }

    long long int_sum = 0;
    long long int_ans = -1;
    sort(vPairInt_A.begin(), vPairInt_A.end(), greater<long long>());
    long long cnt = 0;
    for (long long i = int_N - int_K; i < int_N; i++) {
        int_sum += vPairInt_A[i];
        cnt++;
        if (int_sum >= longlong_X) break;
    }
    if (int_sum >= longlong_X) {
        int_ans = (int_N - int_K) + cnt;
    }
    cout << int_ans << "\n"; // LCOV_EXCL_BR_LINE
    return 0;
}