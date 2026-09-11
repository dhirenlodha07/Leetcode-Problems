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
    ListNode* oddEvenList(ListNode* head) {
    vector<int>store;
    if(head==NULL) {
        return head;
    }
    ListNode* temp = head;
    while(temp!=NULL) {
        store.push_back(temp->val);
        if(temp->next==NULL)break;
        temp = temp->next->next;
    }
    temp = head->next;
    while(temp!=NULL ) {
        store.push_back(temp->val);
        if(temp->next==NULL)break;

        temp = temp->next->next;
    }

    ListNode* final = head;
    int i = 0;
    while(final!=NULL){
     final->val = store[i];
     i++;
     final = final->next;
    }
    return head;
    }
};