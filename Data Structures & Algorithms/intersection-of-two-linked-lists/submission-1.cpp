/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
   public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* currA = headA;
        ListNode* currB = headB;
        int countA = 0;
        int countB = 0;
        while (currA) {
            countA++;
            currA = currA->next;
        }
        while (currB) {
            countB++;
            currB = currB->next;
        }
        if (countA > countB) {
            int diff = (countA - countB);
            while (diff) {
                diff--;
                headA = headA->next;
            }
        } else {
            int diff = (countB - countA);

            while (diff) {
                headB = headB->next;
                diff--;
            }
        }
        while (headA && headB) {
            if(headA==headB) return headA;
            if(headA->next && headB->next && headA->next==headB->next) return headA->next;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};