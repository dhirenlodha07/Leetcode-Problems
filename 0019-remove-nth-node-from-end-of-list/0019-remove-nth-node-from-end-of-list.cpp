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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(head == NULL) {
        return head;
    }
   
    int size=0;
    ListNode* temp = head;
    while(temp != NULL) {
        size++;
        temp = temp->next;
    }
    if(size==n) {
        ListNode* edge = head;
        head = head->next;
        delete edge;
        return head;
    }
    ListNode* end = head;
    ListNode* endp = head;
    for(int i=0;i<size-n;i++) {
        end = end->next;
    }
    for(int i=0;i<size-n-1;i++) {
        endp = endp->next;
    }
    
    endp->next = end->next;
    delete end;   

    return head;
    }
};