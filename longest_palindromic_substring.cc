#include <cstdio>
#include <iostream>

using namespace std;

//

class Solution {
 public:
   string longestPalindrome(string s) {
     string palindrome("");
     for (int index = 0; index < s.length(); index ++) {
       //cout << index << endl;
       int left_len = 0;
       // s.at(index - left_len - 1) == s.at(index + left_len)
       while (0 <= index - left_len - 1 && index + left_len < s.length() &&
              s.at(index - left_len - 1) == s.at(index + left_len)) {
         left_len ++;
       }
       if (left_len * 2 > palindrome.length()) {
         palindrome = s.substr(index - left_len, left_len * 2);
       }
       int middle_len = 0;
       while (0 <= index - middle_len && index + middle_len < s.length() &&
              s.at(index - middle_len) == s.at(index + middle_len)) {
         middle_len ++;
       }
       if (palindrome.length() < middle_len * 2 -1) {
         palindrome = s.substr(index - middle_len + 1, middle_len * 2 - 1);
       }
     }
     return palindrome;
   }
};

int main(int argc, char* argv[]) {
  string s("babad");
  Solution solution;
  string ret_s = solution.longestPalindrome(s);
  cout << ret_s << endl;
  cout << argc << endl;
  return 0;
}
