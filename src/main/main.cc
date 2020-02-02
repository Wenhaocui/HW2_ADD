#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  int a = 3;
  int b = 5;
  std::cout << "a + b =" << solution.Add(a, b) <<std::endl;


  std::string c = "abc";
  std::string d = "efg";
  std::cout << "c + d =" << solution.Add(c, d) <<std::endl;

  std::string e = "EE";
  int f = 599;
  std::cout << "e + f =" << solution.Add(e, f) <<std::endl;
}



// Example: input: (3, 5), output: 8
// ● Example: input: (“abc”, “efg”), output: “abcdefg”
// ● Example: input: (“EE”, 599), output: “EE599”