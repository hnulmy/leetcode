#include <cstdio>
#include <iostream>

using namespace std;

// https://leetcode.com/problems/add-two-numbers/

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
 public:
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
   ListNode* current = new ListNode();
   ListNode* ret_head = current;
   int res = 0;
   while (l1 != nullptr || l2 != nullptr) {
     int sum = 0;
     if (l1 != nullptr) {
       sum += l1->val;
       l1 = l1->next;
     }
     if (l2 != nullptr) {
       sum += l2 ->val;
       l2 = l2->next;
     }
     res = sum / 10;
     current-> val = sum % 10;
     current->next = new ListNode();
     current = current->next;
   }
   if (res == 1) {
     current->val = res;
   }
   return ret_head;
  }
};

void test_function() {
  cout << "test function" << endl;
}

int main(int argc, char *argv[]) {
  ListNode *l1 = new ListNode(4);
  ListNode *l2 = new ListNode(6);
  
  Solution solution;
  ListNode *l3 = solution.addTwoNumbers(l1, l2);

  while (l3 != nullptr) {
    cout << l3->val << endl;
    l3 = l3->next;
  }
  return 0;
}
