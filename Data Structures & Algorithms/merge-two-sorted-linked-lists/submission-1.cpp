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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 && !list2) return list1;
        if (list1 && !list2) return list1;
        if (!list1 && list2) return list2;
        ListNode* head = NULL;
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        if (list1->val <= list2->val) {
            head = list1;
            curr1=curr1->next;
        } else {
            head = list2;
            curr2=curr2->next;
        }
        ListNode* tail = head;

        while (curr1 && curr2) {
            int val1 = curr1->val;
            int val2 = curr2->val;
            if (curr1->val <= curr2->val) {
                ListNode* t1 = curr1->next;
                tail->next = curr1;
                tail = curr1;
                curr1 = t1;
            } else {
                tail->next = curr2;
                tail = curr2;
                curr2 = curr2->next;
            }
        }
        while (curr2) {
            tail->next = curr2;
            tail = curr2;
            curr2 = curr2->next;
        }
        while (curr1) {
            tail->next = curr1;
            tail = curr1;
            curr1 = curr1->next;
        }
        return head;
    }
};
