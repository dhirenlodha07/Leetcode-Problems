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
    ListNode* temp = head;
    ListNode* prev = NULL;
    if(head == NULL) {
        return head;
    }
    while(temp!=NULL && temp->next!=NULL ) {
        if(temp->val == temp->next->val) {
            while(temp->next!=NULL && temp->val == temp->next->val) {
                temp = temp->next;
            }
            if(prev==NULL) {
                head =temp->next;
            }
            else{
            prev->next = temp->next;
            }
        }
        else {
            prev = temp;
        }
        temp = temp->next;
    }    
    return head;
    }
};