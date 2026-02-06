#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_samples_112_a_additionandsubtractioneasy
#include "../src/AtCoder/samples/At_samples_112_A-AdditionandSubtractionEasy.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_samples_112_a_additionandsubtractioneasy();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_samples_112_a_additionandsubtractioneasy, AdditionSmall) {
    EXPECT_EQ(RunIO("1 + 2\n"), "3\n");
}

TEST(at_samples_112_a_additionandsubtractioneasy, SubtractionSmall) {
    EXPECT_EQ(RunIO("5 - 3\n"), "2\n");
}

TEST(at_samples_112_a_additionandsubtractioneasy, AdditionLarge) {
    EXPECT_EQ(RunIO("1000000000 + 1000000000\n"), "2000000000\n");
}

TEST(at_samples_112_a_additionandsubtractioneasy, SubtractionLarge) {
    EXPECT_EQ(RunIO("1000000000 - 1\n"), "999999999\n");
}

TEST(at_samples_112_a_additionandsubtractioneasy, NoSpaces) {
    EXPECT_EQ(RunIO("7+8\n"), "15\n");
}
