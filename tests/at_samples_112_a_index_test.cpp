#include <gtest/gtest.h>

#include <sstream>
#include <string>

#define main main_impl_at_samples_112_a_index
#include "../src/AtCoder/samples/At_samples_112_A-Index.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_samples_112_a_index();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_samples_112_a_index, SingleChar) {
    EXPECT_EQ(RunIO("a\n1\n"), "a\n");
}

TEST(at_samples_112_a_index, FirstChar) {
    EXPECT_EQ(RunIO("abcde\n1\n"), "a\n");
}

TEST(at_samples_112_a_index, MiddleChar) {
    EXPECT_EQ(RunIO("abcdef\n3\n"), "c\n");
}

TEST(at_samples_112_a_index, LastChar) {
    EXPECT_EQ(RunIO("xyz\n3\n"), "z\n");
}

TEST(at_samples_112_a_index, LongerString) {
    EXPECT_EQ(RunIO("helloworld\n5\n"), "o\n");
}
