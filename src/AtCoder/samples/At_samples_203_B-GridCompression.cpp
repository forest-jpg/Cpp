//問題文
// 縦H行、横W列のマス目があります。上からi行目、左からj列目のマスを(i,j)と表します。
// 各マスは白または黒です。マス目の配色は、H行W列の行列(a_{i,j})によって与えられます。
// a_{i,j}が.ならばマス(i,j)は白であり、a_{i,j}が#ならばマス(i,j)は黒です。

// すぬけ君はこのマス目を圧縮しようとしています。
// そのために、白いマスのみからなる行または列が存在する間、
// 次の操作を繰り返し行います。
// 操作: 白いマスのみからなる行または列をひとつ任意に選び、
//      その行または列を取り除いて空白を詰める。
// 各操作でどの行または列を選ぶかによらず、最終的なマス目は一意に定まることが示せます。
// 最終的なマス目を求めてください。

// 制約
// 1≤H,W≤100
// a_{i,j}は.または#である。
// マス目全体で少なくともひとつは黒いマスが存在する。

// 入力
// H W
// a_{1,1}...a_{1,W}
// :
// a_{H,1}...a_{H,W}

// 出力
// 最終的なマス目を、入力と同様のフォーマットで出力せよ。
// ただし、行数および列数は省くこと。詳しくはサンプルを参照せよ。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    rep(i, 0, h)rep(j, 0, w) cin >> a.at(i).at(j);
    
    int trimmed_h = h, trimmed_w = w;
    rep(i, 0, trimmed_h){
        bool hasSharp = false;
        rep(j, 0, trimmed_w) {
            if (a.at(i).at(j) == '#') hasSharp = true;
        }
        if (!hasSharp) {
            a.erase(a.begin() + i);
            trimmed_h--;
            i--;
        }
    }
    rep(i, 0, trimmed_w){
        bool hasSharp = false;
        rep(j, 0, trimmed_h) {
            if (a.at(j).at(i) == '#') hasSharp = true;
        }
        if (!hasSharp) {
            rep(j, 0, trimmed_h) a.at(j).erase(a.at(j).begin() + i);
            trimmed_w--;
            i--;
        }
    }

    rep(i, 0, trimmed_h){
        rep(j, 0, trimmed_w) cout << a.at(i).at(j);
        cout << "\n";
    }
        
    return 0;
}
