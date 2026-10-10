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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* curr = head;
        while (curr) {
            count++;
            curr = curr->next;
        }
        int move = count - n;
        if (move == 0) {
            head = head->next;
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr1 = head;
        while (move) {
            prev = curr1;
            curr1 = curr1->next;
            move--;
        }

        prev->next = curr1->next;
        return head;
    }
};
