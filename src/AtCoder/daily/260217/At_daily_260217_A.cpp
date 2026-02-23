// 問題文
// 各桁が 1 以上 9 以下の整数である 3 桁の整数 N が与えられます。
// N の 100 の位を a、10 の位を b、1 の位を c としたとき、
// b,c,a をこの順に並べた整数と c,a,b をこの順に並べた整数をそれぞれ出力してください。

// 制約
// N は各桁が 1 以上 9 以下の整数である 3 桁の整数

// 入力
// 入力は以下の形式で標準入力から与えられる。
// N

// 出力
// b,c,a をこの順に並べた整数と c,a,b をこの順に並べた整数をこの順で空白区切りで出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    int a, b, c;
    c = N % 10;
    N /= 10;
    b = N % 10;
    a = N / 10;

    cout << b << c << a << " ";
    cout << c << a << b << "\n";

    return 0;
}