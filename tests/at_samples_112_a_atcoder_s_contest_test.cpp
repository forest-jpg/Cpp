#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_samples_112_a_atcoder_s_contest
#include "../src/AtCoder/samples/At_samples_112_A-AtCoderSContest.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_samples_112_a_atcoder_s_contest();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_samples_112_a_atcoder_s_contest, TypicalBeginner) {
    EXPECT_EQ(RunIO("AtCoder Beginner Contest\n"), "ABC\n");
}

TEST(at_samples_112_a_atcoder_s_contest, SingleCharS) {
    EXPECT_EQ(RunIO("AtCoder X Contest\n"), "AXC\n");
}

TEST(at_samples_112_a_atcoder_s_contest, LowercaseS) {
    EXPECT_EQ(RunIO("AtCoder programming Contest\n"), "ApC\n");
}

TEST(at_samples_112_a_atcoder_s_contest, Standard) {
    EXPECT_EQ(RunIO("AtCoder Standard Contest\n"), "ASC\n");
}

TEST(at_samples_112_a_atcoder_s_contest, LongS) {
    EXPECT_EQ(RunIO("AtCoder Supercalifragilisticexpialidocious Contest\n"), "ASC\n");
}
