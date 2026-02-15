#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_study_ex13
#include "../src/AtCoder/study/At_study_ex13.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_study_ex13();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_study_ex13, ExampleTruncation) {
    const std::string input = "3\n2 1 4\n";
    const std::string expected = "0\n1\n2\n";
    EXPECT_EQ(RunIO(input), expected);
}

TEST(at_study_ex13, SingleValue) {
    EXPECT_EQ(RunIO("1\n42\n"), "0\n");
}

TEST(at_study_ex13, AllEqual) {
    const std::string input = "5\n7 7 7 7 7\n";
    const std::string expected = "0\n0\n0\n0\n0\n";
    EXPECT_EQ(RunIO(input), expected);
}

TEST(at_study_ex13, NonIntegerAverageTruncates) {
    const std::string input = "4\n1 2 3 10\n";
    const std::string expected = "3\n2\n1\n6\n";
    EXPECT_EQ(RunIO(input), expected);
}

TEST(at_study_ex13, Extremes) {
    const std::string input = "3\n0 100 100\n";
    const std::string expected = "66\n34\n34\n";
    EXPECT_EQ(RunIO(input), expected);
}
