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
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        if (!l1 && l2) return l2;
        if (l1 && !l2) return l1;
        if (!l1 && !l2) return l1;
        int carry = 0;
        while (l1 && l2) {
            int data = l1->val + l2->val + carry;
            ListNode* newNode;
            if (data < 10) {
                newNode = new ListNode(data);
                carry = 0;
            } else {
                int last = data % 10;
                int first = data / 10;
                newNode = new ListNode(last);
                carry = first;
            }
            if (newHead == NULL) {
                newHead = newNode;
                newTail = newNode;
            } else {
                newTail->next = newNode;
                newTail = newNode;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1) {
            int data = l1->val;
            if (carry) {
                data += carry;
                carry = 0;
            }
            ListNode* newNode;
            if (data < 10) {
                newNode = new ListNode(data);
                carry = 0;
            } else {
                int last = data % 10;
                int first = data / 10;
                newNode = new ListNode(last);
                carry = first;
            }
            if (newHead == NULL) {
                newHead = newNode;
                newTail = newNode;
            } else {
                newTail->next = newNode;
                newTail = newNode;
            }
            l1 = l1->next;
        }
        while (l2) {
            int data = l2->val;
            if (carry) {
                data += carry;
                carry = 0;
            }
            ListNode* newNode;
            if (data < 10) {
                newNode = new ListNode(data);
                carry = 0;
            } else {
                int last = data % 10;
                int first = data / 10;
                newNode = new ListNode(last);
                carry = first;
            }
            if (newHead == NULL) {
                newHead = newNode;
                newTail = newNode;
            } else {
                newTail->next = newNode;
                newTail = newNode;
            }
            l2 = l2->next;
        }
        if (carry) {
            ListNode* newNode = new ListNode(carry);
            if (newHead == NULL) {
                newHead = newNode;
                newTail = newNode;
            } else {
                newTail->next = newNode;
                newTail = newNode;
            }
            carry = 0;
        }
        return newHead;
    }
};
