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
    ListNode* swapNodes(ListNode* head, int k) {
    if(head == NULL) {
        return head;
    }    
    ListNode*  temp = head;
    int n=0;

    while(temp != NULL) {
        n++;
        temp = temp->next;
    }
    
    ListNode* beg=head;
    ListNode* end=head; 

    for(int i=0;i<k-1;i++) {
        beg = beg->next;
    }
    for(int i=0;i<n-k;i++) {
        end = end->next;
    }
    int temp_value = beg->val;
    beg->val = end->val;
    end->val = temp_value;


  return head;

    }
};