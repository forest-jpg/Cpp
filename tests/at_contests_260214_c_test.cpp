#include <gtest/gtest.h>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

#define main main_impl_at_contests_260214_c
#include "../src/AtCoder/contests/260214/At_contests_260214_C.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_contests_260214_c();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}

std::vector<long long> ParseOutput(const std::string& output) {
    std::istringstream iss(output);
    std::vector<long long> vals;
    long long v;
    while (iss >> v) vals.push_back(v);
    return vals;
}

long long PowMod(long long base, long long exp, long long mod) {
    long long res = 1 % mod;
    long long cur = base % mod;
    while (exp > 0) {
        if (exp & 1LL) res = (res * cur) % mod;
        cur = (cur * cur) % mod;
        exp >>= 1LL;
    }
    return res;
}

int ComputeTarget(const std::vector<int>& a_zero_based, int start) {
    std::vector<int> path;
    std::unordered_map<int, int> index_map;
    int cur = start;
    while (index_map.find(cur) == index_map.end()) {
        index_map[cur] = static_cast<int>(path.size());
        path.push_back(cur);
        cur = a_zero_based.at(cur);
    }

    int cycle_start = index_map[cur];
    int cycle_len = static_cast<int>(path.size()) - cycle_start;

    // T = 10^100 is enormous, so T >= cycle_start always holds for these inputs.
    long long t_mod = PowMod(10, 100, cycle_len);
    long long offset = (t_mod - (cycle_start % cycle_len) + cycle_len) % cycle_len;
    int answer_index = cycle_start + static_cast<int>(offset);

    return path.at(answer_index);
}

std::vector<int> ComputeExpected(const std::vector<int>& a_one_based) {
    std::vector<int> a_zero_based(a_one_based.size());
    for (size_t i = 0; i < a_one_based.size(); ++i) {
        a_zero_based[i] = a_one_based[i] - 1;
    }

    std::vector<int> expected(a_one_based.size());
    for (size_t s = 0; s < a_one_based.size(); ++s) {
        expected[s] = ComputeTarget(a_zero_based, static_cast<int>(s)) + 1;
    }
    return expected;
}
}  // namespace

TEST(at_contests_260214_c, SingleNodeSelfLoop) {
    std::string out = RunIO("1\n1\n");
    auto vals = ParseOutput(out);
    auto expected = ComputeExpected({1});
    ASSERT_EQ(vals.size(), expected.size());
    EXPECT_EQ(vals[0], expected[0]);
}

TEST(at_contests_260214_c, TwoNodesSelfLoops) {
    std::string out = RunIO("2\n1 2\n");
    auto vals = ParseOutput(out);
    auto expected = ComputeExpected({1, 2});
    ASSERT_EQ(vals.size(), expected.size());
    EXPECT_EQ(vals[0], expected[0]);
    EXPECT_EQ(vals[1], expected[1]);
}

TEST(at_contests_260214_c, ThreeNodeCycle) {
    std::string out = RunIO("3\n2 3 1\n");
    auto vals = ParseOutput(out);
    auto expected = ComputeExpected({2, 3, 1});
    ASSERT_EQ(vals.size(), expected.size());
    EXPECT_EQ(vals[0], expected[0]);
    EXPECT_EQ(vals[1], expected[1]);
    EXPECT_EQ(vals[2], expected[2]);
}

TEST(at_contests_260214_c, TwoCycles) {
    std::string out = RunIO("4\n2 1 4 3\n");
    auto vals = ParseOutput(out);
    auto expected = ComputeExpected({2, 1, 4, 3});
    ASSERT_EQ(vals.size(), expected.size());
    EXPECT_EQ(vals[0], expected[0]);
    EXPECT_EQ(vals[1], expected[1]);
    EXPECT_EQ(vals[2], expected[2]);
    EXPECT_EQ(vals[3], expected[3]);
}

TEST(at_contests_260214_c, TailIntoCycle) {
    std::string out = RunIO("5\n2 3 4 5 3\n");
    auto vals = ParseOutput(out);
    auto expected = ComputeExpected({2, 3, 4, 5, 3});
    ASSERT_EQ(vals.size(), expected.size());
    EXPECT_EQ(vals[0], expected[0]);
    EXPECT_EQ(vals[1], expected[1]);
    EXPECT_EQ(vals[2], expected[2]);
    EXPECT_EQ(vals[3], expected[3]);
    EXPECT_EQ(vals[4], expected[4]);
}
