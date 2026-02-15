#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_book_B02
#include "../src/book/book_B02.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_book_B02();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(book_B02, RangeHasDivisor) {
    EXPECT_EQ(RunIO("9 11\n"), "Yes\n");
}

TEST(book_B02, RangeNoDivisor) {
    EXPECT_EQ(RunIO("6 8\n"), "No\n");
}

TEST(book_B02, RangeSingleDivisor) {
    EXPECT_EQ(RunIO("1 1\n"), "Yes\n");
}

TEST(book_B02, RangeOutsideDivisors) {
    EXPECT_EQ(RunIO("101 200\n"), "No\n");
}
