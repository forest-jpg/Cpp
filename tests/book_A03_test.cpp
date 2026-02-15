#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_book_A03
#include "../src/book/book_A03.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_book_A03();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(book_A03, HasCombinationSimple) {
    EXPECT_EQ(RunIO("3 5\n1 2 3\n4 5 6\n"), "Yes\n");
}

TEST(book_A03, NoCombination) {
    EXPECT_EQ(RunIO("3 10\n1 2 3\n4 5 6\n"), "No\n");
}

TEST(book_A03, SingleElementYes) {
    EXPECT_EQ(RunIO("1 15\n7\n8\n"), "Yes\n");
}

TEST(book_A03, SingleElementNo) {
    EXPECT_EQ(RunIO("1 16\n7\n8\n"), "No\n");
}

TEST(book_A03, WithNegativeNumbers) {
    EXPECT_EQ(RunIO("4 7\n-3 0 5 8\n10 1 -2 4\n"), "Yes\n");
}

TEST(book_A03, DuplicateValues) {
    EXPECT_EQ(RunIO("4 6\n3 3 3 3\n3 1 2 3\n"), "Yes\n");
}

TEST(book_A03, LargeKNoMatch) {
    EXPECT_EQ(RunIO("5 100\n1 2 3 4 5\n6 7 8 9 10\n"), "No\n");
}
