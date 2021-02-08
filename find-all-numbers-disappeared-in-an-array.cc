#include <cstdio>
#include <iostream>
#include <array>
#include <vector>

using namespace std;

// Find All Numbers Disappeared in an Array
// URL: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
class Solution {
 public:
   vector<int> findDisappearedNumbers(vector<int>& nums) {
     vector<int> ret_vec;
     for (int i = 0; i < nums.size(); i ++) {
       int current = (nums.at(i) > 0 ? nums.at(i) : -1 * nums.at(i)) - 1;
       nums.at(current) = nums.at(current) > 0 ? -1 * nums.at(current) : nums.at(current);
     }
     for (int i = 0; i < nums.size(); i ++) {
       if (nums.at(i) > 0) {
         ret_vec.push_back(i + 1);
       }
     }
     return ret_vec;
   }
};

int main(int argc, char *argv[]) {
  vector<int> vec = {1, 2, 4, 2, 3};
  Solution solution;
  solution.findDisappearedNumbers(vec);
  return 0;
}
