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
    ListNode* mergeInBetween(ListNode* head1, int a, int b, ListNode* head2) {
    ListNode* prev1 = head1;
    for(int count=0;count<a-1;count++) {
       prev1 =  prev1 -> next;
    }
    ListNode* nextNode = head1;
    for(int count=0;count<b;count++) {
        nextNode = nextNode -> next;
    }

    ListNode* curr = head2;
    while(curr->next!=NULL) {
        curr = curr->next;
    }
    curr -> next = nextNode->next;
    prev1->next = head2;
return head1;
    }
};