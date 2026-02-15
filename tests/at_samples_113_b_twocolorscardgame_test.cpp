#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_samples_113_b_twocolorscardgame
#include "../src/AtCoder/samples/At_samples_113_B-TwoColorsCardGame.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_samples_113_b_twocolorscardgame();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_samples_113_b_twocolorscardgame, ContainsTrueAndUpdate) {
    // a: 2-1=1, b: 1-0=1
    EXPECT_EQ(RunIO("3\na a b\n1\na\n"), "1\n");
}

TEST(at_samples_113_b_twocolorscardgame, AllCanceledToZero) {
    // x: 2-2=0
    EXPECT_EQ(RunIO("2\nx x\n2\nx x\n"), "0\n");
}

TEST(at_samples_113_b_twocolorscardgame, ContainsFalseDominates) {
    // a:1, b:2, red has c only
    EXPECT_EQ(RunIO("3\na b b\n1\nc\n"), "2\n");
}

TEST(at_samples_113_b_twocolorscardgame, NegativeValuesDoNotUpdate) {
    // p:1, q:2-3=-1, r:1-2=-1
    EXPECT_EQ(RunIO("4\np q q r\n5\nq q q r r\n"), "1\n");
}

TEST(at_samples_113_b_twocolorscardgame, SingleElementNoRedMatch) {
    // z:1, red has y only
    EXPECT_EQ(RunIO("1\nz\n1\ny\n"), "1\n");
}
