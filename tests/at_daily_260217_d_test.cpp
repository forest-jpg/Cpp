#include <gtest/gtest.h>
#include <sstream>
#include <string>
#include <cmath>
#include <iostream>

#define main main_impl_daily_260217_D
#include "../src/AtCoder/daily/260217/At_daily_260217_D.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_daily_260217_D();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}

bool IsNearEqual(double expected, double actual, double epsilon = 1e-5) {
    return std::abs(expected - actual) < epsilon ||
           std::abs(expected - actual) / std::max(std::abs(expected), 1.0) < epsilon;
}
}  // namespace

TEST(At_daily_260217_D, SingleLightSingleUnlit) {
    // 1つの明かり、1つの暗い人
    // 明かり：(0, 0)、暗い人：(3, 4) → 距離 5.0
    std::string result = RunIO("2 1\n1\n0 0\n3 4\n");
    double expected = 5.0;
    double actual = std::stod(result);
    EXPECT_TRUE(IsNearEqual(expected, actual));
}

TEST(At_daily_260217_D, MultipleLightsSingleUnlit) {
    // 2つの明かり、1つの暗い人
    // 明かり：(0, 0), (10, 0)、暗い人：(5, 0) → 距離 5.0
    std::string result = RunIO("3 2\n1 2\n0 0\n10 0\n5 0\n");
    double expected = 5.0;
    double actual = std::stod(result);
    EXPECT_TRUE(IsNearEqual(expected, actual));
}

TEST(At_daily_260217_D, SingleLightMultipleUnlit) {
    // 1つの明かり、2つの暗い人
    // 明かり：(0, 0)、暗い人：(3, 4), (5, 12) → max距離 13.0
    std::string result = RunIO("3 1\n1\n0 0\n3 4\n5 12\n");
    double expected = 13.0;
    double actual = std::stod(result);
    EXPECT_TRUE(IsNearEqual(expected, actual));
}

TEST(At_daily_260217_D, ZeroCoordinates) {
    // すべて原点周辺
    // 明かり：(0, 0)、暗い人：(1, 1) → sqrt(2)
    std::string result = RunIO("2 1\n1\n0 0\n1 1\n");
    double expected = std::sqrt(2.0);
    double actual = std::stod(result);
    EXPECT_TRUE(IsNearEqual(expected, actual));
}

TEST(At_daily_260217_D, NegativeCoordinates) {
    // 負の座標を含む
    // 明かり：(-5, -5)、暗い人：(5, 5) → sqrt(200) = 10*sqrt(2)
    std::string result = RunIO("2 1\n1\n-5 -5\n5 5\n");
    double expected = std::sqrt(200.0);
    double actual = std::stod(result);
    EXPECT_TRUE(IsNearEqual(expected, actual));
}

TEST(At_daily_260217_D, MixedLightsAndUnlit) {
    // 複数の明かり複数の暗い人
    // 明かり：(0, 0), (10, 10)
    // 暗い人：(3, 4), (11, 11) → 最大距離は5.0と sqrt(2.0)より5.0
    std::string result = RunIO("4 2\n1 2\n0 0\n10 10\n3 4\n11 11\n");
    double expected = 5.0;
    double actual = std::stod(result);
    EXPECT_TRUE(IsNearEqual(expected, actual));
}

TEST(At_daily_260217_D, LargeCoordinates) {
    // 大きな座標値
    // 明かり：(100000, 100000)、暗い人：(100003, 100004) → 5.0
    std::string result = RunIO("2 1\n1\n100000 100000\n100003 100004\n");
    double expected = 5.0;
    double actual = std::stod(result);
    EXPECT_TRUE(IsNearEqual(expected, actual));
}

TEST(At_daily_260217_D, ClosestLightSelection) {
    // 複数の明かりから最も近いものを選ぶ
    // 明かり：(0, 0), (100, 100)
    // 暗い人：(1, 1) → (0, 0)が最も近い、距離 sqrt(2)
    std::string result = RunIO("3 2\n1 2\n0 0\n100 100\n1 1\n");
    double expected = std::sqrt(2.0);
    double actual = std::stod(result);
    EXPECT_TRUE(IsNearEqual(expected, actual));
}

TEST(At_daily_260217_D, ManhattanVsEuclideanDistance) {
    // マンハッタン距離では最小でも、ユークリッド距離では異なるケース
    // 暗い人：(5, 0)
    // 明かり1：(0, 0) → 距離² = 25
    // 明かり2：(2, 2) → 距離² = 13（最小）→ sqrt(13) ≈ 3.606
    std::string result = RunIO("3 2\n1 2\n0 0\n2 2\n5 0\n");
    double expected = std::sqrt(13.0);
    double actual = std::stod(result);
    EXPECT_TRUE(IsNearEqual(expected, actual));
}
