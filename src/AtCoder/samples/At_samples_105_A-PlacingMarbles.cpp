// 問題文
// 1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。
// 各マスには 0 か 1 が書かれており、
// マス i には si が書かれています。

// 1 が書かれたマスにビー玉を置きます。 
// ビー玉が置かれるマスがいくつあるか求めてください。

// 制約
// s1​,s2,s3 は 1 あるいは 0

// 入力
// 入力は以下の形式で標準入力から与えられる。
// s1s2s3 ​
 
// 出力
// 答えを出力せよ。
#include <bits/stdc++.h>
using namespace std;

int main() {
    int int_s;
    cin >> int_s;

    int int_cnt = 0;
    for (int i = 0; i < 3; i++) {
        if (int_s % 10 == 1) {
            int_cnt++;
        }
        int_s /= 10;
    }
    cout << int_cnt << "\n";

    return 0;
}
