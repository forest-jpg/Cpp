#include <gtest/gtest.h>
#include <sstream>
#include <string>

#define main main_impl_at_contests_beginners_c_hakuchumu
#include "../src/AtCoder/contests/Beginners/At_contests_Beginners_C-Hakuchumu.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_contests_beginners_c_hakuchumu();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}
}  // namespace

TEST(at_contests_beginners_c_hakuchumu, SingleDream) {
    EXPECT_EQ(RunIO("dream\n"), "YES\n");
}

TEST(at_contests_beginners_c_hakuchumu, SingleDreamer) {
    EXPECT_EQ(RunIO("dreamer\n"), "YES\n");
}

TEST(at_contests_beginners_c_hakuchumu, SingleErase) {
    EXPECT_EQ(RunIO("erase\n"), "YES\n");
}

TEST(at_contests_beginners_c_hakuchumu, SingleEraser) {
    EXPECT_EQ(RunIO("eraser\n"), "YES\n");
}

TEST(at_contests_beginners_c_hakuchumu, DreamEraseConcat) {
    EXPECT_EQ(RunIO("dreamerase\n"), "YES\n");
}

TEST(at_contests_beginners_c_hakuchumu, DreamEraserConcat) {
    EXPECT_EQ(RunIO("dreameraser\n"), "YES\n");
}

TEST(at_contests_beginners_c_hakuchumu, EraserDreamConcat) {
    EXPECT_EQ(RunIO("eraserdream\n"), "YES\n");
}

TEST(at_contests_beginners_c_hakuchumu, DreamerEraserConcat) {
    EXPECT_EQ(RunIO("dreamereraser\n"), "YES\n");
}

TEST(at_contests_beginners_c_hakuchumu, DreamDreamConcat) {
    EXPECT_EQ(RunIO("dreamdream\n"), "YES\n");
}

TEST(at_contests_beginners_c_hakuchumu, InvalidFromStart) {
    EXPECT_EQ(RunIO("a\n"), "NO\n");
}

TEST(at_contests_beginners_c_hakuchumu, InvalidSuffix) {
    EXPECT_EQ(RunIO("dreameras\n"), "NO\n");
}

TEST(at_contests_beginners_c_hakuchumu, InvalidSimilar) {
    EXPECT_EQ(RunIO("dreamerer\n"), "NO\n");
}

TEST(at_contests_beginners_c_hakuchumu, InvalidMixed) {
    EXPECT_EQ(RunIO("eraserdrea\n"), "NO\n");
}

TEST(at_contests_beginners_c_hakuchumu, EmptyInput) {
    EXPECT_EQ(RunIO("\n"), "YES\n");
}

TEST(at_contests_beginners_c_hakuchumu, InvalidAfterLongToken) {
    EXPECT_EQ(RunIO("dreamerasera\n"), "NO\n");
}

TEST(at_contests_beginners_c_hakuchumu, ValidAllToken) {
    EXPECT_EQ(RunIO("dreameraserdreamerasedreamerdreamerasererase\n"), "YES\n");
}

TEST(at_contests_beginners_c_hakuchumu, InvalidAfterAllToken) {
    EXPECT_EQ(RunIO("dreameraserdreamerasedreamerdreamerasererasea\n"), "NO\n");
}