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
        if (head == NULL) return NULL;
        ListNode* prev = NULL;
        ListNode* temp = NULL;
        ListNode* curr = head;
        while (curr) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* temp = head;
        ListNode* newHead = NULL;
        ListNode* prev = NULL;
        int count = 0;
        while (curr) {
            count = 0;
            while (count < k - 1 && curr) {
                count++;
                curr = curr->next;
            }
            if (!curr || !curr->next && count<k-1) {
                if(newHead){
                    prev->next=head;
                    return newHead;
                } else {
                    return head;
                }
            }

            temp=curr->next;
            curr->next=NULL;
            ListNode* node=reverse(head);
            if(newHead==NULL){
                newHead=node;
            } else {
                prev->next=node;
                // prev=head;
            }
            prev=head;
            curr=temp;
            head=temp;
            
        }
        return newHead;
    }
};
