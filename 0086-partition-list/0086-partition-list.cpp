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
    ListNode* partition(ListNode* head, int x) {
      ListNode*  left = NULL,*right=NULL;
      ListNode* leftHead=NULL,*rightHead = NULL;

      ListNode* temp = head;
      while(temp!=NULL) {
        if(temp->val < x) {
            ListNode* newNode = new ListNode(temp->val);

            if(leftHead==NULL) {
            leftHead = newNode;
            left = newNode;
            }else {
                left->next = newNode;
                left = newNode;
            }
        }
        else {
            ListNode* newNode = new ListNode(temp->val);

            if(rightHead==NULL) {
            rightHead = newNode;
            right = newNode;
            }else {
                right->next = newNode;
                right = newNode;
            }
        }
        temp = temp->next;
      }
      if (right != NULL) right->next = NULL;
        
        if(leftHead == NULL) return rightHead;
        
        left->next = rightHead;
        return leftHead;
    }
};