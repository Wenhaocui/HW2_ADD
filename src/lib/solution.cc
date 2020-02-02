#include "solution.h"
#include <iostream>


int Solution::Add(int a, int b) {
  return a + b;
}

std::string Solution::Add(std::string& a, std::string& b){
  return a + b;
}

std::string Solution::Add(std::string a, int b){
  return a + std::to_string(b);
}









