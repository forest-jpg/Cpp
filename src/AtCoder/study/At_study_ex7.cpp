#include <bits/stdc++.h>
using namespace std;

int main() {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
  bool a = true;
  bool b = false;
  bool c = true;

  // ここから先は変更しないこと

  if (a) {
    cout << "At"; // LCOV_EXCL_BR_LINE
  }
  else {
    cout << "Yo"; // LCOV_EXCL_BR_LINE
  }

  if (!a && b) {
    cout << "Bo"; // LCOV_EXCL_BR_LINE
  }
  else if (!b || c) {
    cout << "Co"; // LCOV_EXCL_BR_LINE
  }

  if (a && b && c) {
    cout << "foo!"; // LCOV_EXCL_BR_LINE
  }
  else if (true && false) {
    cout << "yeah!"; // LCOV_EXCL_BR_LINE
  }
  else if (!a || c) {
    cout << "der"; // LCOV_EXCL_BR_LINE
  }

  cout << endl; // LCOV_EXCL_BR_LINE
  return 0;
}
