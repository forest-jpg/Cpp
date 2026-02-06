#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_samples_112_b_minesweeper
#include "../src/AtCoder/samples/At_samples_112_B-Minesweeper.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_samples_112_b_minesweeper();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_samples_112_b_minesweeper, SingleEmpty) {
    EXPECT_EQ(RunIO("1 1\n.\n"), "0\n");
}

TEST(at_samples_112_b_minesweeper, SingleBomb) {
    EXPECT_EQ(RunIO("1 1\n#\n"), "#\n");
}

TEST(at_samples_112_b_minesweeper, TwoByThreeMixed) {
    EXPECT_EQ(RunIO("2 3\n#..\n...\n"), "#10\n110\n");
}

TEST(at_samples_112_b_minesweeper, ThreeByThreeCorners) {
    EXPECT_EQ(RunIO("3 3\n#.#\n...\n#.#\n"), "#2#\n242\n#2#\n");
}
