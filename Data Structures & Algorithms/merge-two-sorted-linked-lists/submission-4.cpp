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
        if(!list1 && !list2) return list1;
        if(!list1 && list2) return list2;
        if(list1 && !list2) return list1;
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* newHead = NULL;
        ListNode* tail = NULL;
        while (t1 && t2) {
            if (t1->val <= t2->val) {
                if (newHead == NULL) {
                    newHead = t1;
                    tail = t1;
                    t1 = t1->next;
                } else {
                    tail->next = t1;
                    tail = t1;
                    t1 = t1->next;
                }
            } else {
                if (newHead == NULL) {
                    newHead = t2;
                    tail = t2;
                    t2 = t2->next;
                } else {
                    tail->next = t2;
                    tail = t2;
                    t2 = t2->next;
                }
            }
        }
        while(t1){
            tail->next = t1;
            tail=t1;
            t1=t1->next;
        }
         while(t2){
            tail->next = t2;
            tail=t2;
            t2=t2->next;
        }
        return newHead;
    }
};
