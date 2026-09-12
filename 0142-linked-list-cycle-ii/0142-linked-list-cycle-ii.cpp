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
    ListNode *detectCycle(ListNode *head) {
   //tortoise and hare alg : The optimal for detection of cycle in a ll
    ListNode* slow = head;
    ListNode* fast =  head;
    while(fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) { //cycle detected
            slow = head; //reset slow and thenn move both by one step for second collision pt
            while(slow!=fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return fast; //or slow
        }
    }
    return NULL;
    }
};