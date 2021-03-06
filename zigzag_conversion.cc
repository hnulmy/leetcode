#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

// https://leetcode.com/problems/zigzag-conversion/

class Solution {
 public:
   string convert(string s, int numRows) {
     if (numRows == 1) {
       return s;
     }
     string ret_string = "";
     char zigzag[1000 + 5][1000 + 5];
     memset(zigzag, 0, sizeof(zigzag));
     cout << zigzag[0][0] << zigzag[100][100] << endl;
     int circle = numRows;
     int s_cnt = 0;
     for (int col = 0; col < 1001; col ++) {
       if (s.length() <= s_cnt) {
         break;
       }
       circle = circle - 1 > 0 ? circle - 1 : numRows - 1;
       for (int row = 0; row < numRows; row ++) {
         if (s.length() <= s_cnt) {
           break;
         }
         if (col % (numRows - 1) == 0) {
           zigzag[row][col] = s.at(s_cnt);
           s_cnt ++;
         } else if (row == circle) {
           zigzag[row][col] = s.at(s_cnt);
           s_cnt ++;
         } else {
           continue;
         }
       }
     }
     s_cnt = 0;
     for (int row = 0; row < numRows; row ++) {
       if (s.length() <= s_cnt) {
         break;
       }
       for (int col = 0; col < 1001; col ++) {
         if (s.length() <= s_cnt) {
           break;
         }
         if (zigzag[row][col] != 0) {
           ret_string += zigzag[row][col];
           s_cnt ++;
         }
       }
     }
     return ret_string;
   }
};

int main(int argc, char* argv[]) {
  string test_s = "PAYPALISHIRING";
  int numRows = 3;
  Solution solution;
  string ret = solution.convert(test_s, numRows);
  cout << ret << endl;
  return 0;
}
