#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <string>

TEST(Intadd, HandleIntadd) {
  Solution solution;
  int a = 3;
  int b = 5;
  EXPECT_EQ(solution.Add(a, b), 8);
}

TEST(Stringadd, HandleStringadd) {
  Solution solution;
  std::string c = "abc";
  std::string d = "efg";
  std::string actual = solution.Add(c, d);
  std::string expected = "abcefg";
  EXPECT_EQ(expected, actual);
}

TEST(StringAndIntAdd, HandleStringAdIntAdd) {
  Solution solution;
  std::string e = "EE";
  int f = 599;
  std::string actual = solution.Add(e, f);
  std::string expected = "EE599";
  EXPECT_EQ(expected, actual);
}

