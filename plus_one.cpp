#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

//

class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    vector<int> ret_vec;
    int index = digits.size() - 1;
    int number = 10;
    while (index >= 0) {
      number = number / 10 + digits[index];
      if (number == 10) {
        ret_vec.push_back(0);
      } else {
        ret_vec.push_back(number);
      }
      index --;
    }
    if (ret_vec[ret_vec.size() - 1] == 0) {
      ret_vec.push_back(1);
    }
    ret_vec.reserve(ret_vec.size());
    return ret_vec;
  }
};

int main(int argc, char* argv[]) {
  cout << argc << endl;
  return 0;
}
