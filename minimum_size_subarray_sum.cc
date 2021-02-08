#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
   int minSubArrayLen(int target, vector<int>& nums) {
     int min_size = 0x7fffffff;
     vector<vector<int>> dp_vec;
     int current_size = 0;
     for (int raw = 0; raw < nums.size(); raw ++) {
       if (raw > 0) {
         cout << raw << endl;
         dp_vec[raw][raw] = nums[raw];
       }
       for (int col = raw; col < nums.size(); col ++) {
         if (raw == 0 && col == 0) {
           dp_vec[0][0] = nums[0];
         } else {
           dp_vec[raw][col] = dp_vec[raw][col - 1] + nums[col];
         }
         if (target <= dp_vec[raw][col]) {
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
  vector<int> test_vec = {1, 2, 5, 6};
  Solution solution;
  int ret = solution.minSubArrayLen(6, test_vec);
  cout << ret << endl;
  return 0;
}
