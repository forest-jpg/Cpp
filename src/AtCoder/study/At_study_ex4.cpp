  // 以下のコメント/* */を消して追記する
//   cout << /* 1年は何秒か */ << endl; // LCOV_EXCL_BR_LINE
//   cout << /* 2年は何秒か */ << endl; // LCOV_EXCL_BR_LINE
//   cout << /* 5年は何秒か */ << endl; // LCOV_EXCL_BR_LINE
//   cout << /* 10年は何秒か */ << endl; // LCOV_EXCL_BR_LINE
#include <bits/stdc++.h>
using namespace std;

int main() {
  // 一年の秒数
  int seconds = 365 * 24 * 60 * 60;

  cout << seconds << endl; // LCOV_EXCL_BR_LINE
  cout << seconds * 2 << endl; // LCOV_EXCL_BR_LINE
  cout << seconds * 5 << endl; // LCOV_EXCL_BR_LINE
  cout << seconds * 10 << endl; // LCOV_EXCL_BR_LINE
  return 0;
}
