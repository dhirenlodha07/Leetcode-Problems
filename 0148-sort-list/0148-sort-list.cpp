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
    ListNode* sortList(ListNode* head) {
    vector<int>nodes;

    ListNode* temp = head;
    while(temp!=NULL) {
        nodes.push_back(temp->val);
        temp = temp->next;
    }
    
    sort(nodes.begin(),nodes.end());

    ListNode* newtemp = head;
    for(int i=0;i<nodes.size();i++) {
        newtemp->val = nodes[i];
        newtemp = newtemp -> next;
    }
    return head;
    }
};