#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_contests_260221_c
#include "../src/AtCoder/contests/260221/At_contests_260221_C.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_contests_260221_c();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(At_contests_260221_C, SingleTestCase_BasicScenario) {
    std::string input = "1\n"
                       "3 2\n"
                       "1 1 1\n"
                       "1 1 1\n";
    EXPECT_EQ(RunIO(input), "0\n");
}

TEST(At_contests_260221_C, SingleTestCase_MoreBreakfast) {
    std::string input = "1\n"
                       "2 3\n"
                       "2 2\n"
                       "1 1\n";
    std::string output = RunIO(input);
    EXPECT_FALSE(output.empty());
}

TEST(At_contests_260221_C, MultipleTestCases) {
    std::string input = "2\n"
                       "2 3\n"
                       "1 1\n"
                       "1 1\n"
                       "2 2\n"
                       "2 2\n"
                       "1 1\n";
    std::string output = RunIO(input);
    std::istringstream iss(output);
    std::string line1, line2;
    std::getline(iss, line1);
    std::getline(iss, line2);
    EXPECT_FALSE(line1.empty());
    EXPECT_FALSE(line2.empty());
}

TEST(At_contests_260221_C, EdgeCase_MinimalInput) {
    std::string input = "1\n"
                       "1 1\n"
                       "1\n"
                       "1\n";
    EXPECT_EQ(RunIO(input), "0\n");
}

TEST(At_contests_260221_C, EdgeCase_NoBreakfastOrLunch) {
    std::string input = "1\n"
                       "3 5\n"
                       "0 0 0\n"
                       "0 0 0\n";
    EXPECT_EQ(RunIO(input), "0\n");
}

TEST(At_contests_260221_C, LargeExpiration) {
    std::string input = "1\n"
                       "3 10\n"
                       "2 2 2\n"
                       "1 1 1\n";
    std::string output = RunIO(input);
    EXPECT_FALSE(output.empty());
}

TEST(At_contests_260221_C, ThreeTestCases_Mixed) {
    std::string input = "3\n"
                       "1 1\n"
                       "1\n"
                       "1\n"
                       "2 2\n"
                       "1 1\n"
                       "0 0\n"
                       "2 3\n"
                       "2 1\n"
                       "1 1\n";
    std::string output = RunIO(input);
    std::istringstream iss(output);
    int count = 0;
    std::string line;
    while (std::getline(iss, line)) {
        if (!line.empty()) count++;
    }
    EXPECT_EQ(count, 3);
}
