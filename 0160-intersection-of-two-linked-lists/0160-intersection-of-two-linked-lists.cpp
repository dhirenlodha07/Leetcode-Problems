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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* temp1 = headA;
    ListNode* temp2 = headB;
    
    int lenA=0;
    int lenB=0;
    while(temp1!=NULL) {
        lenA++;
        temp1 = temp1 -> next;
    }
    while(temp2!=NULL) {
        lenB++;
        temp2 = temp2 -> next;
    }

    temp1 = headA;
    temp2 = headB;

    while(lenA>lenB) {
        temp1 = temp1->next;
        lenA--;
    }
    while(lenB>lenA) {
        temp2 = temp2->next;
        lenB--;
    }
    while(temp1 !=NULL && temp2!=NULL) {
        if(temp1==temp2) {
            return temp1;
        }
        else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

    }
    return NULL;   
    }
};