#include <gtest/gtest.h>

#include <sstream>
#include <string>

#define main main_impl_at_samples_112_a_tea
#include "../src/AtCoder/samples/At_samples_112_A-Tea.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_samples_112_a_tea();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_samples_112_a_tea, EndsWithT) {
    EXPECT_EQ(RunIO("MINT\n"), "YES\n");
}

TEST(at_samples_112_a_tea, DoesNotEndWithT) {
    EXPECT_EQ(RunIO("TEA\n"), "NO\n");
}

TEST(at_samples_112_a_tea, SingleCharT) {
    EXPECT_EQ(RunIO("T\n"), "YES\n");
}

TEST(at_samples_112_a_tea, SingleCharNotT) {
    EXPECT_EQ(RunIO("A\n"), "NO\n");
}

TEST(at_samples_112_a_tea, LongerString) {
    EXPECT_EQ(RunIO("CHOCOLATET\n"), "YES\n");
}
