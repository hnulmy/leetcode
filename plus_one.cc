#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

//

class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
<<<<<<< HEAD
    vector<int> vec;
=======
    vector<int> ret_vec;
>>>>>>> 0281534bf7aebd62ab7314a05d8dd121b45dd2eb
    int index = digits.size() - 1;
    int number = 10;
    while (index >= 0) {
      number = number / 10 + digits[index];
      if (number == 10) {
<<<<<<< HEAD
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
=======
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
>>>>>>> 0281534bf7aebd62ab7314a05d8dd121b45dd2eb
  }
};

int main(int argc, char* argv[]) {
  cout << argc << endl;
  return 0;
}
