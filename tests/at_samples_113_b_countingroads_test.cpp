#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_samples_113_b_countingroads
#include "../src/AtCoder/samples/At_samples_113_B-CountingRoads.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_samples_113_b_countingroads();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_samples_113_b_countingroads, MinimalCase) {
    EXPECT_EQ(RunIO("2 1\n1 2\n"), "1\n1\n");
}

TEST(at_samples_113_b_countingroads, MultipleEdgesSamePair) {
    const std::string input =
        "3 4\n"
        "1 2\n"
        "1 2\n"
        "2 3\n"
        "1 3\n";
    const std::string expected =
        "3\n"
        "3\n"
        "2\n";
    EXPECT_EQ(RunIO(input), expected);
}

TEST(at_samples_113_b_countingroads, IsolatedCityExists) {
    const std::string input =
        "4 2\n"
        "1 2\n"
        "2 3\n";
    const std::string expected =
        "1\n"
        "2\n"
        "1\n"
        "0\n";
    EXPECT_EQ(RunIO(input), expected);
}

TEST(at_samples_113_b_countingroads, CompleteGraphN3) {
    const std::string input =
        "3 3\n"
        "1 2\n"
        "1 3\n"
        "2 3\n";
    const std::string expected =
        "2\n"
        "2\n"
        "2\n";
    EXPECT_EQ(RunIO(input), expected);
}
