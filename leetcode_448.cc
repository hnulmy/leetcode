#include <cstdio>
#include <iostream>
#include <array>
#include <vector>

using namespace std;

// Find All  Numbers Disappeared in an Array
class Solution {
 public:
   vector<int> FindDisappearedNumbers(vector<int>& nums) {
     vector<int> ret_vec;
     for (int i = 0; i < nums.size(); i ++) {
       int current = (nums.at(i) > 0 ? nums.at(i) : -1 * nums.at(i)) - 1;
       nums.at(current) = nums.at(current) > 0 ? -1 * nums.at(current) : nums.at(current);
     }
     for (int i = 0; i < nums.size(); i ++) {
       //cout << nums[i] << endl;
       if (nums.at(i) > 0) {
         ret_vec.push_back(i + 1);
         cout << i + 1 << endl;
       }
     }
     return ret_vec;
   }
};

int main(int argc, char *argv[]) {
  cout << argc << endl;
  cout << *argv << endl;
  //cout << *(argv+1)[0] << *(argv+2)[0] << endl;
  cout << *(argv[1]) <<endl << *(argv + 1) <<endl;
  Solution solution;
  vector<int> vec = {1, 2, 4, 2, 3};
  solution.FindDisappearedNumbers(vec);
  return 0;
}
