#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/plus-one/

class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    vector<int> vec;
    int index = digits.size() - 1;
    int number = 10;
    while (index >= 0) {
      number = number / 10 + digits[index];
      if (number == 10) {
        vec.push_back(0);
      } else {
        vec.push_back(number);
      }
      index --;
    }
    if (vec[digits.size() - 1] == 0) {
      vec.push_back(1);
    }
    vector<int> ret;
    for (int index = vec.size() - 1; index >= 0; index --) {
      ret.push_back(vec.at(index));
    }
    return ret;
  }
};

int main(int argc, char* argv[]) {
  cout << argc << endl;
  return 0;
}
