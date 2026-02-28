#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_daily_260227_e
#include "../src/AtCoder/daily/260227/At_daily_260227_E.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_daily_260227_e();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}

std::string Solve(const std::string& s) {
    std::string input = std::to_string(s.size()) + "\n" + s + "\n";
    return RunIO(input);
}
}  // namespace

TEST(At_daily_260227_E, SingleSlashOnly) {
    EXPECT_EQ(Solve("/"), "1\n");
}

TEST(At_daily_260227_E, BasicPattern_OneSlashTwo) {
    EXPECT_EQ(Solve("1/2"), "3\n");
}

TEST(At_daily_260227_E, BasicPattern_Double) {
    EXPECT_EQ(Solve("11/22"), "5\n");
}

TEST(At_daily_260227_E, SlashAtBeginning) {
    EXPECT_EQ(Solve("/222"), "1\n");
}

TEST(At_daily_260227_E, SlashAtEnd) {
    EXPECT_EQ(Solve("111/"), "1\n");
}

TEST(At_daily_260227_E, MultipleSlashes) {
    EXPECT_EQ(Solve("1/22/2"), "3\n");
}

TEST(At_daily_260227_E, BestSubstringInMiddle) {
    EXPECT_EQ(Solve("211/22"), "5\n");
}

TEST(At_daily_260227_E, MaxConstraint_N200000) {
    std::string s;
    s.reserve(200000);
    s += std::string(99999, '1');
    s += '/';
    s += std::string(100000, '2');

    EXPECT_EQ(static_cast<int>(s.size()), 200000);
    EXPECT_EQ(Solve(s), "199999\n");
}