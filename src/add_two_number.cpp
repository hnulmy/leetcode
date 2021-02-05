#include <cstdio>
#include <iostream>

using namespace std;

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
        ListNode* ret;
        while (l1 != nullptr && l2 != nullptr) {
            int sum = l1->val + l2->val;
            ListNode list_node(sum % 10);
            //ret->next = list_node;
        }
        return ret;
    }
};

int main() {
    return 0;
}

