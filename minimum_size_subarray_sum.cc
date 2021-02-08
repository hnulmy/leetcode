#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
 public:
   int minSubArrayLen(int target, vector<int>& nums) {
     int min_size = 0x7fffffff;
     int dp[100000 + 1];
     int current_size = 0;
     for (int raw = 0; raw < nums.size(); raw ++) {
       dp[raw] = nums[raw];
       for (int col = raw; col < nums.size(); col ++) {
         if (col != raw) {
           dp[col] = dp[col - 1] + nums[col];
         }
         if (target <= dp[col]) {
           current_size = col - raw + 1;
           min_size = min_size < current_size ? min_size : current_size;
         }
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
