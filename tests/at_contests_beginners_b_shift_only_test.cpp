#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_contests_beginners_b_shift_only
#include "../src/AtCoder/contests/Beginners/At_contests_Beginners_B-ShiftOnly.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_contests_beginners_b_shift_only();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_contests_beginners_b_shift_only, SingleOdd) {
    EXPECT_EQ(RunIO("1\n1\n"), "0\n");
}

TEST(at_contests_beginners_b_shift_only, AllEvenMultipleTimes) {
    // 8=2^3, 12=2^2*3, 40=2^3*5 -> min exponent is 2
    EXPECT_EQ(RunIO("3\n8 12 40\n"), "2\n");
}

TEST(at_contests_beginners_b_shift_only, ContainsOdd) {
    EXPECT_EQ(RunIO("3\n2 3 4\n"), "0\n");
}

TEST(at_contests_beginners_b_shift_only, PowersOfTwo) {
    // 2,4,8,16 -> min exponent is 1
    EXPECT_EQ(RunIO("4\n2 4 8 16\n"), "1\n");
}

TEST(at_contests_beginners_b_shift_only, MaxValueSingle) {
    // 1e9 = 2^9 * 1953125 -> 9 operations
    EXPECT_EQ(RunIO("1\n1000000000\n"), "9\n");
}
