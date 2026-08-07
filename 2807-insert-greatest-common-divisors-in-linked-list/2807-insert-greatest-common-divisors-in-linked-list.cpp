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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
    ListNode* temp = head;

    while(temp!=NULL && temp->next!=NULL) {
        int gcd = 0;

        for(int i=1;i<=min(temp->val,temp->next->val);i++) {
            if(temp->val%i==0  && temp->next->val%i==0) {
                gcd = i;
            }
        }
        ListNode* newNode = new ListNode(gcd);
        newNode ->next = temp->next;
        temp->next = newNode;
        temp = temp->next->next;
    }
    return head;    
    }
};