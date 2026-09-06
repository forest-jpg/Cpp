// 問題文
// H 行 
// W 列のグリッドがあり、はじめすべてのマスが白で塗られています。グリッドの上から 
// i 行目、左から 
// j 列目のマスを 
// (i,j) と表記します。

// このグリッドはトーラス状であるとみなします。すなわち、各 
// 1≤i≤H に対して (i,W) の右に (i,1) があり、各 1≤j≤W に対して 
// (H,j) の下に (1,j) があるとします。

// 高橋君が (1,1) にいて上を向いています。高橋君が以下の操作を 
// N 回繰り返した後のグリッドの各マスがどの色で塗られているか出力してください。

// 現在いるマスが白で塗られている場合は、現在いるマスを黒に塗り替え、時計回りに 
// 90° 回転し、向いている方向に 
// 1 マス進む。そうでない場合は、現在いるマスを白に塗り替え、反時計回りに 
// 90° 回転し、向いている方向に 
// 1 マス進む。
// 制約
// 1≤H,W≤100
// 1≤N≤1000
// 入力される数値はすべて整数
// 入力
// 入力は以下の形式で標準入力から与えられる。

// H 
// W 
// N
// 出力
// H 行出力せよ。
// i 行目には長さ 
// W の文字列であって、
// (i,j) が白で塗られている場合は 
// j 文字目が .、黒で塗られている場合は 
// j 文字目が # であるものを出力せよ。
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
#define rep(i, s, n) for (ull i = s; i < (ull)(n); i++)

int main() {
    // typedef enum {
    //     UP = 0,
    //     RIGHT,
    //     DOWN,
    //     LEFT
    // } Direction;

    int H, W, N;
    cin >> H >> W >> N;
    vector<vector<char>> Grid(H, vector<char>(W, '.'));
    
    int direction = 0, cur_R = 0, cur_C = 0;
    rep(i, 0, N) 
        switch(direction) {
            case 0:
                if (Grid[cur_R][cur_C] == '.') {
                    Grid[cur_R][cur_C] = '#';
                    direction = 1;
                    cur_C = (cur_C == W - 1 ? 0 : cur_C + 1);
                } else {
                    Grid[cur_R][cur_C] = '.';
                    direction = 3;
                    cur_C = (cur_C ? cur_C - 1 : W - 1);
                }
                break;
            case 1:
                if (Grid[cur_R][cur_C] == '.') {
                    Grid[cur_R][cur_C] = '#';
                    direction = 2;
                    cur_R = (cur_R == H - 1 ? 0 : cur_R + 1);
                } else {
                    Grid[cur_R][cur_C] = '.';
                    direction = 0;
                    cur_R = (cur_R ? cur_R - 1 : H - 1);
                }
                break;
            case 2:
                if (Grid[cur_R][cur_C] == '.') {
                    Grid[cur_R][cur_C] = '#';
                    direction = 3;
                    cur_C = (cur_C ? cur_C - 1 : W - 1);
                } else {
                    Grid[cur_R][cur_C] = '.';
                    direction = 1;
                    cur_C = (cur_C == W - 1 ? 0 : cur_C + 1);
                }
                break;
            case 3:
                if (Grid[cur_R][cur_C] == '.') {
                    Grid[cur_R][cur_C] = '#';
                    direction = 0;
                    cur_R = (cur_R ? cur_R - 1 : H - 1);
                } else {
                    Grid[cur_R][cur_C] = '.';
                    direction = 2;
                    cur_R = (cur_R == H - 1 ? 0 : cur_R + 1);
                }
                break;    
        }
    
    rep(i, 0, H) {
        rep(j, 0, W) cout << Grid[i][j];
        cout << "\n";
    }

    return 0;
}