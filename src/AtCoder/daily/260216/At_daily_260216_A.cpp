// 問題文
// 下の画像で示す図において、
// a 番の点と 
// b 番の点が線で直接結ばれているかを答えてください。
// 2分木の上から通し番が振ってある

// 制約
// 1≤a<b≤15
// a,b は整数
// 入力
// 入力は以下の形式で標準入力から与えられる。

// a 
// b
// 出力
// a 番の点と 
// b 番の点が線で直接結ばれているなら Yes、結ばれていないなら No を出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    // vector<int> graph = {
    //     1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
    // };

    string ans = "No";
    if(b/2 == a) ans = "Yes";
    cout << ans << "\n";

    return 0;
}