#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
 public:
   int minSubArrayLen(int target, vector<int>& nums) {
     int min_size = 0x7fffffff;
     int sum = 0;
     int pre_index = 0;
     for (int index = 0; index < nums.size(); index ++) {
       sum += nums[index];
       while (target <= sum) {
         int current_size = index - pre_index + 1;
         min_size = min_size < current_size ? min_size : current_size;
         sum -= nums[pre_index];
         pre_index ++;
       }
     }
     return min_size == 0x7fffffff ? 0 : min_size;
   }
};

int main(int argc, char* argv[]) {
  // update while scanning
  vector<int> test_nums = {2, 3, 1, 2, 4, 3};
  int test_target = 7;
  Solution solution;
  int ret = solution.minSubArrayLen(test_target, test_nums);
  cout << ret << endl;
  return 0;
}
