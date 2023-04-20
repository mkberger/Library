// description of problem can be found at : https://leetcode.com/problems/add-two-numbers/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode();
        ListNode* l4 = l3;
        int carry = 0;
        int sum;
        while(l1 || l2 || carry){
            sum = 0;
            if(l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum / 10;
            ListNode* temp = new ListNode(sum % 10);
            l4->next = temp;
            l4 = l4->next;
        }
        return l3->next;
    }
};
