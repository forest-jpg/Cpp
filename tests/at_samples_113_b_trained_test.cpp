#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_samples_113_b_trained
#include "../src/AtCoder/samples/At_samples_113_B-Trained.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_samples_113_b_trained();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_samples_113_b_trained, ReachableInOne) {
    EXPECT_EQ(RunIO("3\n2 3 2\n"), "1\n");
}

TEST(at_samples_113_b_trained, ReachableInTwo) {
    EXPECT_EQ(RunIO("4\n3 4 2 2\n"), "2\n");
}

TEST(at_samples_113_b_trained, ReachableInThree) {
    EXPECT_EQ(RunIO("4\n3 1 4 2\n"), "3\n");
}

TEST(at_samples_113_b_trained, UnreachableCycleNoTwo) {
    EXPECT_EQ(RunIO("4\n3 4 3 4\n"), "-1\n");
}

TEST(at_samples_113_b_trained, UnreachableSelfLoopAtOne) {
    EXPECT_EQ(RunIO("2\n1 1\n"), "-1\n");
}

TEST(at_samples_113_b_trained, UnreachableChainIntoCycle) {
    EXPECT_EQ(RunIO("5\n3 2 4 5 3\n"), "-1\n");
}
