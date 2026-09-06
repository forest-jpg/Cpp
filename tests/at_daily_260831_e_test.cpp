#include <gtest/gtest.h>

#include <cmath>
#include <sstream>
#include <string>

#define main main_impl_at_daily_260831_e
#include "../src/AtCoder/daily/260831/At_daily_260831_E.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_daily_260831_e();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}

bool IsNearEqual(double expected, double actual, double epsilon = 1e-5) {
    return std::abs(expected - actual) < epsilon ||
           std::abs(expected - actual) / std::max(std::abs(expected), 1.0) < epsilon;
}
}  // namespace

TEST(At_daily_260831_E, SingleFuse) {
    double actual = std::stod(RunIO("1\n10 2\n"));
    EXPECT_TRUE(IsNearEqual(5.0, actual));
}

TEST(At_daily_260831_E, UniformSpeedMultipleFuses) {
    double actual = std::stod(RunIO("3\n1 1\n2 1\n3 1\n"));
    EXPECT_TRUE(IsNearEqual(3.0, actual));
}

TEST(At_daily_260831_E, TwoFusesDifferentSpeedsMeetInSecondFuse) {
    double actual = std::stod(RunIO("2\n4 2\n4 1\n"));
    EXPECT_TRUE(IsNearEqual(5.0, actual));
}

TEST(At_daily_260831_E, MeetInsideFirstFuse) {
    double actual = std::stod(RunIO("2\n10 1\n10 10\n"));
    EXPECT_TRUE(IsNearEqual(5.5, actual));
}

TEST(At_daily_260831_E, FractionalAnswerAcrossBoundary) {
    double actual = std::stod(RunIO("3\n5 2\n6 3\n3 1\n"));
    EXPECT_TRUE(IsNearEqual(8.75, actual));
}

TEST(At_daily_260831_E, MeetInMiddleFuse) {
    double actual = std::stod(RunIO("3\n8 4\n9 3\n6 2\n"));
    EXPECT_TRUE(IsNearEqual(14.0, actual));
}
