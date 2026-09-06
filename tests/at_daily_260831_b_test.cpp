#include <gtest/gtest.h>

#include <sstream>
#include <string>

#define main main_impl_at_daily_260831_b
#include "../src/AtCoder/daily/260831/At_daily_260831_B.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_daily_260831_b();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(At_daily_260831_B, AlreadyHostYear) {
    EXPECT_EQ(RunIO("2026\n"), "2026\n");
}

TEST(At_daily_260831_B, NextAfterRemainderZero) {
    EXPECT_EQ(RunIO("2024\n"), "2026\n");
}

TEST(At_daily_260831_B, NextAfterRemainderOne) {
    EXPECT_EQ(RunIO("2025\n"), "2026\n");
}

TEST(At_daily_260831_B, NextAfterRemainderThree) {
    EXPECT_EQ(RunIO("2027\n"), "2030\n");
}

TEST(At_daily_260831_B, UpperBoundInput) {
    EXPECT_EQ(RunIO("3000\n"), "3002\n");
}
