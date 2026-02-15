#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    if (!(cin >> T)) { // LCOV_EXCL_BR_LINE
        return 0;
    }

    vector<int> answers;
    answers.reserve(T);

    int a,b;

    for (int t = 0; t < T; t++) {
        int N, W;
        cin >> N >> W; /*  */ // LCOV_EXCL_BR_LINE
        vector<int> cost(N);
        for (int i = 0; i < N; i++) {
            cin >> cost[i]; // LCOV_EXCL_BR_LINE
        }

        if (W <= 0) {
            answers.push_back(0);
            continue;
        }

        const int window = 2 * W;
        vector<int> tmp(window, 0);  // 初期化して累積加算のゴミを防ぐ

        for (int offset = 0; offset < window; offset++) {
            int sum = 0;
            for (int i = 0; i < N; i++) {
                if (((i + 1) + (offset + 1)) % window < W) {
                    sum += cost[i];
                }
            }
            tmp[offset] = sum;
        }

        answers.push_back(*min_element(tmp.begin(), tmp.end()));
    }

    for (size_t i = 0; i < answers.size(); i++) {
        if (i > 0) {
            cout << '\n'; // LCOV_EXCL_BR_LINE
        }
        cout << answers[i]; // LCOV_EXCL_BR_LINE
    }
    cout << '\n'; // LCOV_EXCL_BR_LINE
    return 0;
}