#include <gtest/gtest.h>

#include <sstream>
#include <string>

#define main main_impl_at_daily_260831_a
#include "../src/AtCoder/daily/260831/At_daily_260831_A.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_daily_260831_a();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(At_daily_260831_A, InsufficientForFatherImmediately) {
    EXPECT_EQ(RunIO("4\n5\n7\n9\n"), "F\n");
}

TEST(At_daily_260831_A, InsufficientForMother) {
    EXPECT_EQ(RunIO("11\n5\n7\n9\n"), "M\n");
}

TEST(At_daily_260831_A, InsufficientForTakahashi) {
    EXPECT_EQ(RunIO("18\n5\n7\n9\n"), "T\n");
}

TEST(At_daily_260831_A, WrapAroundToFatherAfterCompleteCycles) {
    EXPECT_EQ(RunIO("42\n5\n7\n9\n"), "F\n");
}

TEST(At_daily_260831_A, WrapAroundToMotherAfterCompleteCycles) {
    EXPECT_EQ(RunIO("47\n5\n7\n9\n"), "M\n");
}
