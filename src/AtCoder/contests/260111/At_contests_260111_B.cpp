#include <bits/stdc++.h>
using namespace std;

int main() {
  string line;
  if (!getline(cin, line)) { // LCOV_EXCL_BR_LINE
    return 0;
  }

  if (!getline(cin, line)) { // LCOV_EXCL_BR_LINE
    return 0;
  }

  istringstream iss(line);
  vector<int> nums;
  int x;

  while (iss >> x) {
    nums.push_back(x);
  }

  if (nums.size() < 3) {
    cout << endl; // LCOV_EXCL_BR_LINE
    return 0;
  }

  vector<int> nums_sorted = nums;
  sort(nums_sorted.begin(), nums_sorted.end()); /* 早い順 */

  vector<int> rtn;
  rtn.reserve(3);
  for (size_t i = 0; i < 3; i++) {
    auto it = find(nums.begin(), nums.end(), nums_sorted[i]);
    if (it != nums.end()) {
      rtn.push_back(static_cast<int>(distance(nums.begin(), it)) + 1);
    }
  }

  for (size_t i = 0; i < rtn.size(); i++) {
    if (i > 0) {
      cout << ' '; // LCOV_EXCL_BR_LINE
    }
    cout << rtn[i]; // LCOV_EXCL_BR_LINE
  }
  cout << std::endl; // LCOV_EXCL_BR_LINE
  return 0;
}
