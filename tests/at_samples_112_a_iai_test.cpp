#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_samples_112_a_iai
#include "../src/AtCoder/samples/At_samples_112_A-iai.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_samples_112_a_iai();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_samples_112_a_iai, VowelA) {
    EXPECT_EQ(RunIO("a\n"), "vowel\n");
}

TEST(at_samples_112_a_iai, VowelE) {
    EXPECT_EQ(RunIO("e\n"), "vowel\n");
}

TEST(at_samples_112_a_iai, VowelI) {
    EXPECT_EQ(RunIO("i\n"), "vowel\n");
}

TEST(at_samples_112_a_iai, VowelO) {
    EXPECT_EQ(RunIO("o\n"), "vowel\n");
}

TEST(at_samples_112_a_iai, VowelU) {
    EXPECT_EQ(RunIO("u\n"), "vowel\n");
}

TEST(at_samples_112_a_iai, ConsonantB) {
    EXPECT_EQ(RunIO("b\n"), "consonant\n");
}

TEST(at_samples_112_a_iai, ConsonantZ) {
    EXPECT_EQ(RunIO("z\n"), "consonant\n");
}

TEST(at_samples_112_a_iai, ConsonantY) {
    EXPECT_EQ(RunIO("y\n"), "consonant\n");
}
