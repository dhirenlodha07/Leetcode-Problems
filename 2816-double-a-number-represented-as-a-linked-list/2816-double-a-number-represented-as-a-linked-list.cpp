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
    ListNode* doubleIt(ListNode* head) {
    vector<int>ans;
    ListNode* temp = head;
    while(temp!=NULL) {
        ans.insert(ans.begin(),temp->val);
        temp = temp->next;
    }
    int carry = 0;
    for(int i=0;i<ans.size();i++) {
      int sum = (ans[i] * 2) + carry; 
      ans[i] = sum % 10;
      carry = sum / 10;
    }
    if(carry==1) {
        ans.push_back(1);
    }

    ListNode* newHead = new ListNode(0);
    ListNode* tempo = newHead;
    for(int i=ans.size()-1;i>=0;i--) {
        tempo->next = new ListNode(ans[i]);
        tempo=tempo->next;
    }
    return newHead->next;
    }
};