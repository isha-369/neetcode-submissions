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
    ListNode* reverse(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* temp1 = head;
        while (temp1) {
            temp1 = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp1;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* fast = head->next;
        ListNode* slow = head;
        ListNode* l1 = head;
        ListNode* l2 = NULL;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        l2 = slow->next;
        slow->next = NULL;

        ListNode* l3 = reverse(l2);
        ListNode* tail=l1;
        ListNode* curr1 = l1;
        ListNode* curr2 = l3;
        while(curr1&&curr2){
            ListNode* t1=curr1->next;
            ListNode* t2=curr2->next;
            curr1->next=curr2;
            curr2->next=t1;
            curr1=t1;
            curr2=t2;
        }
    }
};
