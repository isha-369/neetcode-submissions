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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* temp = head->next;
        ListNode* curr = head;
        while (curr) {
            while (temp && curr->val == temp->val) {
                temp = temp->next;
            }
            curr->next = temp;
            curr = temp;
            if (temp) {
                temp = temp->next;
            }
        }
        // curr->next = temp;
        return head;
    }
};
