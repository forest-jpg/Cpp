#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_daily_260831_c
#include "../src/AtCoder/daily/260831/At_daily_260831_C.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_daily_260831_c();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_daily_260831_c, SingleInsertThenPop) {
    const std::string input =
        "2\n"
        "1 42\n"
        "2\n";
    const std::string expected = "42\n";
    EXPECT_EQ(RunIO(input), expected);
}

TEST(at_daily_260831_c, InterleavedOperations) {
    const std::string input =
        "8\n"
        "1 5\n"
        "1 3\n"
        "2\n"
        "1 4\n"
        "1 2\n"
        "2\n"
        "2\n"
        "2\n";
    const std::string expected =
        "3\n"
        "2\n"
        "4\n"
        "5\n";
    EXPECT_EQ(RunIO(input), expected);
}

TEST(at_daily_260831_c, HandlesDuplicates) {
    const std::string input =
        "7\n"
        "1 7\n"
        "1 1\n"
        "1 1\n"
        "1 5\n"
        "2\n"
        "2\n"
        "2\n";
    const std::string expected =
        "1\n"
        "1\n"
        "5\n";
    EXPECT_EQ(RunIO(input), expected);
}

TEST(at_daily_260831_c, BoundaryValuesOneAndHundred) {
    const std::string input =
        "6\n"
        "1 100\n"
        "1 1\n"
        "2\n"
        "1 100\n"
        "2\n"
        "2\n";
    const std::string expected =
        "1\n"
        "100\n"
        "100\n";
    EXPECT_EQ(RunIO(input), expected);
}

TEST(at_daily_260831_c, MultiplePopsAfterMixedInserts) {
    const std::string input =
        "10\n"
        "1 8\n"
        "1 6\n"
        "1 7\n"
        "2\n"
        "1 5\n"
        "2\n"
        "1 9\n"
        "2\n"
        "2\n"
        "2\n";
    const std::string expected =
        "6\n"
        "5\n"
        "7\n"
        "8\n"
        "9\n";
    EXPECT_EQ(RunIO(input), expected);
}
