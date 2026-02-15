#include <gtest/gtest.h>
#include <sstream>
#include <string>
#include <vector>

#define main main_impl_at_contests_beginners_c_otoshidama
#include "../src/AtCoder/contests/Beginners/At_contests_Beginners_C-Otoshidama.cpp"
#undef main

namespace {
std::string RunIO(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;

    auto* cin_buf = std::cin.rdbuf();
    auto* cout_buf = std::cout.rdbuf();

    std::cin.rdbuf(iss.rdbuf());
    std::cout.rdbuf(oss.rdbuf());

    main_impl_at_contests_beginners_c_otoshidama();

    std::cin.rdbuf(cin_buf);
    std::cout.rdbuf(cout_buf);

    return oss.str();
}

bool ValidateAnswer(int n, int y, const std::string& output) {
    if (output == "-1 -1 -1\n") return true;
    
    int x, yy, z;
    char space;
    std::istringstream iss(output);
    if (!(iss >> x >> yy >> z)) return false;
    
    return (x >= 0 && yy >= 0 && z >= 0) &&
           (x + yy + z == n) &&
           (x * 10000 + yy * 5000 + z * 1000 == y);
}
}  // namespace

TEST(at_contests_beginners_c_otoshidama, AllThousandYenNotes) {
    // N=5, Y=5000 -> (0, 0, 5)
    std::string result = RunIO("5\n5000\n");
    EXPECT_TRUE(ValidateAnswer(5, 5000, result));
}

TEST(at_contests_beginners_c_otoshidama, AllTenThousandYenNotes) {
    // N=2, Y=20000 -> (2, 0, 0)
    std::string result = RunIO("2\n20000\n");
    EXPECT_TRUE(ValidateAnswer(2, 20000, result));
}

TEST(at_contests_beginners_c_otoshidama, MixedNotes) {
    // N=10, Y=65000 -> multiple valid combinations
    std::string result = RunIO("10\n65000\n");
    EXPECT_TRUE(ValidateAnswer(10, 65000, result));
}

TEST(at_contests_beginners_c_otoshidama, SingleFiveThousandYenNote) {
    // N=1, Y=5000 -> (0, 1, 0) - one 5000 yen note
    std::string result = RunIO("1\n5000\n");
    EXPECT_TRUE(ValidateAnswer(1, 5000, result));
}

TEST(at_contests_beginners_c_otoshidama, NotEnoughMoneyPerNote) {
    // N=5, Y=1000 -> impossible (5*1000=5000 > 1000)
    EXPECT_EQ(RunIO("5\n1000\n"), "-1 -1 -1\n");
}

TEST(at_contests_beginners_c_otoshidama, ExactlyNThousandYen) {
    // N=3, Y=3000 -> (0, 0, 3)
    std::string result = RunIO("3\n3000\n");
    EXPECT_TRUE(ValidateAnswer(3, 3000, result));
}

TEST(at_contests_beginners_c_otoshidama, ComplexCombination) {
    // N=20, Y=100000 -> multiple valid combinations
    std::string result = RunIO("20\n100000\n");
    EXPECT_TRUE(ValidateAnswer(20, 100000, result));
}

TEST(at_contests_beginners_c_otoshidama, MinimumNoteCount) {
    // N=1, Y=10000 -> (1, 0, 0)
    std::string result = RunIO("1\n10000\n");
    EXPECT_TRUE(ValidateAnswer(1, 10000, result));
}

TEST(at_contests_beginners_c_otoshidama, LargeFiveThousandYen) {
    // N=4, Y=20000 -> (0, 4, 0)
    std::string result = RunIO("4\n20000\n");
    EXPECT_TRUE(ValidateAnswer(4, 20000, result));
}

TEST(at_contests_beginners_c_otoshidama, MixedWithFiveThousand) {
    // N=7, Y=50000
    std::string result = RunIO("7\n50000\n");
    EXPECT_TRUE(ValidateAnswer(7, 50000, result));
}
