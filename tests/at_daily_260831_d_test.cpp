#include <gtest/gtest.h>

#include <sstream>
#include <string>

#define main main_impl_at_daily_260831_d
#include "../src/AtCoder/daily/260831/At_daily_260831_D.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_daily_260831_d();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(At_daily_260831_D, OneIsValid) {
    EXPECT_EQ(RunIO("1\n"), "Yes\n");
}

TEST(At_daily_260831_D, PowerOfTwoOnly) {
    EXPECT_EQ(RunIO("64\n"), "Yes\n");
}

TEST(At_daily_260831_D, PowerOfThreeOnly) {
    EXPECT_EQ(RunIO("729\n"), "Yes\n");
}

TEST(At_daily_260831_D, MixedPowersOfTwoAndThree) {
    EXPECT_EQ(RunIO("432\n"), "Yes\n");
}

TEST(At_daily_260831_D, ContainsOtherPrimeFactor) {
    EXPECT_EQ(RunIO("10\n"), "No\n");
}

TEST(At_daily_260831_D, LargeValidValueWithinConstraint) {
    EXPECT_EQ(RunIO("864691128455135232\n"), "Yes\n");
}

TEST(At_daily_260831_D, LargeInvalidValueWithinConstraint) {
    EXPECT_EQ(RunIO("999999999999999999\n"), "No\n");
}
