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
    vector<int> nextLargerNodes(ListNode* head) {
    int n=0;
    vector<int>answer;
    ListNode* demo =head;
    ListNode* temp = head;
    ListNode* next = head;
    while(demo!=NULL) {
        n++;
        demo=demo->next;
    }
    for(int i=0;i<n;i++){
      next = temp->next;
    while(next != NULL && next->val <= temp->val)  {
     next=  next->next;
    }
      if(next!=NULL) {
        answer.push_back(next->val);
        
      }
        else {
        answer.push_back(0);
       }
     temp = temp->next;
    }
      
    
    return answer;  
    }
};