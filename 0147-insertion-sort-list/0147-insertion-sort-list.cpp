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
    ListNode* insertionSortList(ListNode* head) {
    vector<int>demo;
    ListNode* temp = head;
    while(temp!=NULL) {
        demo.push_back(temp->val);
        temp = temp->next;
    }
    sort(demo.begin(),demo.end());
    ListNode* newHead = new ListNode(demo[0]);
    ListNode* temp2=newHead;
    for(int i=1;i<demo.size();i++) {
        temp2->next = new ListNode(demo[i]);
        temp2= temp2->next;
    }
    return newHead;
    }
};